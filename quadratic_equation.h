#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

#include "equation.h"

/**
 * @brief The QuadraticEquation class represents quadratic equations.
 */
class QuadraticEquation : public Equation {
private:
    double a;  // Coefficient for x^2
    double b;  // Coefficient for x
    double c;  // Constant term

public:
    /**
     * @brief Constructor for initializing a quadratic equation.
     *
     * @param coefficientA Coefficient for x^2.
     * @param coefficientB Coefficient for x.
     * @param constantC Constant term.
     */
    QuadraticEquation(double coefficientA, double coefficientB, double constantC);

    // Implementation of the virtual function
    void solveRoots() const override;
};

#endif // QUADRATIC_EQUATION_H

#ifndef LINEAR_EQUATION_H
#define LINEAR_EQUATION_H

#include "equation.h"

/**
 * @brief The LinearEquation class represents linear equations.
 */
class LinearEquation : public Equation {
private:
    double a;  // Coefficient for x

public:
    /**
     * @brief Constructor for initializing a linear equation.
     *
     * @param coefficientA Coefficient for x.
     */
    LinearEquation(double coefficientA);

    // Implementation of the virtual function
    void solveRoots() const override;
};

#endif // LINEAR_EQUATION_H

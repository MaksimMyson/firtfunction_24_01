#ifndef EQUATION_H
#define EQUATION_H

#include <iostream>
#include <cmath>

/**
 * @brief The Equation class serves as the base abstract class for equations.
 */
class Equation {
public:
    /**
     * @brief Virtual function to compute the roots of the equation.
     */
    virtual void solveRoots() const = 0;

    /**
     * @brief Destructor for proper cleanup.
     */
    virtual ~Equation() {}
};

#endif // EQUATION_H

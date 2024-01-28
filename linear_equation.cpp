#include "linear_equation.h"

LinearEquation::LinearEquation(double coefficientA) : a(coefficientA) {}

void LinearEquation::solveRoots() const {
    if (a == 0) {
        std::cout << "This is not a linear equation." << std::endl;
    }
    else {
        double root = -a;
        std::cout << "Root of the linear equation: x = " << root << std::endl;
    }
}

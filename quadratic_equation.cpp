#include "quadratic_equation.h"

QuadraticEquation::QuadraticEquation(double coefficientA, double coefficientB, double constantC)
    : a(coefficientA), b(coefficientB), c(constantC) {}

void QuadraticEquation::solveRoots() const {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        std::cout << "Roots of the quadratic equation: x1 = " << root1 << ", x2 = " << root2 << std::endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Root of the quadratic equation: x = " << root << std::endl;
    }
    else {
        std::cout << "The quadratic equation has no real roots." << std::endl;
    }
}

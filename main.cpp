#include "linear_equation.h"
#include "quadratic_equation.h"

int main() {
    // Example of a linear equation: 3x + 5 = 0
    LinearEquation linear(3);
    std::cout << "Solving Linear Equation:" << std::endl;
    linear.solveRoots();
    std::cout << std::endl;

    // Example of a quadratic equation: 2x^2 - 5x + 2 = 0
    QuadraticEquation quadratic(2, -5, 2);
    std::cout << "Solving Quadratic Equation:" << std::endl;
    quadratic.solveRoots();

    return 0;
}

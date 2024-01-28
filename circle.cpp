#include "circle.h"

Circle::Circle(int circleX, int circleY, int circleRadius)
    : centerX(circleX), centerY(circleY), radius(circleRadius) {}

void Circle::Show() const {
    std::cout << "Circle: Center (" << centerX << ", " << centerY << "), Radius: " << radius << std::endl;
}

void Circle::Save(const std::string& fileName) const {
    std::ofstream file(fileName);
    if (file.is_open()) {
        file << "Circle " << centerX << " " << centerY << " " << radius;
        file.close();
    }
    else {
        std::cerr << "Unable to open file for saving." << std::endl;
    }
}

void Circle::Load(const std::string& fileName) {
    std::ifstream file(fileName);
    if (file.is_open()) {
        std::string shapeType;
        file >> shapeType >> centerX >> centerY >> radius;
        file.close();
    }
    else {
        std::cerr << "Unable to open file for loading." << std::endl;
    }
}

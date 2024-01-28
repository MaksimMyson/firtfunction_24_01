#include "ellipse.h"

Ellipse::Ellipse(int ellipseX, int ellipseY, int ellipseWidth, int ellipseHeight)
    : x(ellipseX), y(ellipseY), width(ellipseWidth), height(ellipseHeight) {}

void Ellipse::Show() const {
    std::cout << "Ellipse: Top Left Corner (" << x << ", " << y << "), Width: " << width << ", Height: " << height << std::endl;
}

void Ellipse::Save(const std::string& fileName) const {
    std::ofstream file(fileName);
    if (file.is_open()) {
        file << "Ellipse " << x << " " << y << " " << width << " " << height;
        file.close();
    }
    else {
        std::cerr << "Unable to open file for saving." << std::endl;
    }
}

void Ellipse::Load(const std::string& fileName) {
    std::ifstream file(fileName);
    if (file.is_open()) {
        std::string shapeType;
        file >> shapeType >> x >> y >> width >> height;
        file.close();
    }
    else {
        std::cerr << "Unable to open file for loading." << std::endl;
    }
}

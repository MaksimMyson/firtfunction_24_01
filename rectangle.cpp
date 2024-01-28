#include "rectangle.h"

Rectangle::Rectangle(int startX, int startY, int rectWidth, int rectHeight)
    : x(startX), y(startY), width(rectWidth), height(rectHeight) {}

void Rectangle::Show() const {
    std::cout << "Rectangle: Top Left Corner (" << x << ", " << y << "), Width: " << width << ", Height: " << height << std::endl;
}

void Rectangle::Save(const std::string& fileName) const {
    std::ofstream file(fileName);
    if (file.is_open()) {
        file << "Rectangle " << x << " " << y << " " << width << " " << height;
        file.close();
    }
    else {
        std::cerr << "Unable to open file for saving." << std::endl;
    }
}

void Rectangle::Load(const std::string& fileName) {
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

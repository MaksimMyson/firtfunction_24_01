#include "square.h"

Square::Square(int startX, int startY, int sideLength) : x(startX), y(startY), side(sideLength) {}

void Square::Show() const {
    std::cout << "Square: Top Left Corner (" << x << ", " << y << "), Side Length: " << side << std::endl;
}

void Square::Save(const std::string& fileName) const {
    std::ofstream file(fileName);
    if (file.is_open()) {
        file << "Square " << x << " " << y << " " << side;
        file.close();
    }
    else {
        std::cerr << "Unable to open file for saving." << std::endl;
    }
}

void Square::Load(const std::string& fileName) {
    std::ifstream file(fileName);
    if (file.is_open()) {
        std::string shapeType;
        file >> shapeType >> x >> y >> side;
        file.close();
    }
    else {
        std::cerr << "Unable to open file for loading." << std::endl;
    }
}

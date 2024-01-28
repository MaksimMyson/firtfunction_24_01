#include "pet.h"

Pet::Pet(const std::string& petName) : name(petName) {}

void Pet::Show() const {
    std::cout << "Name: " << name << std::endl;
}

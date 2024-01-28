#include "cat.h"

Cat::Cat(const std::string& catName) : Pet(catName) {}

void Cat::Sound() const {
    std::cout << name << " says: Meow! Meow!" << std::endl;
}

void Cat::Type() const {
    std::cout << name << " is a Cat." << std::endl;
}

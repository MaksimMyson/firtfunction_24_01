#include "hamster.h"

Hamster::Hamster(const std::string& hamsterName) : Pet(hamsterName) {}

void Hamster::Sound() const {
    std::cout << name << " says: Squeak! Squeak!" << std::endl;
}

void Hamster::Type() const {
    std::cout << name << " is a Hamster." << std::endl;
}

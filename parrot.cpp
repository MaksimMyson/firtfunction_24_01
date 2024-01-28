#include "parrot.h"

Parrot::Parrot(const std::string& parrotName) : Pet(parrotName) {}

void Parrot::Sound() const {
    std::cout << name << " says: Squawk! Squawk!" << std::endl;
}

void Parrot::Type() const {
    std::cout << name << " is a Parrot." << std::endl;
}

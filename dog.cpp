#include "dog.h"

Dog::Dog(const std::string& dogName) : Pet(dogName) {}

void Dog::Sound() const {
    std::cout << name << " says: Woof! Woof!" << std::endl;
}

void Dog::Type() const {
    std::cout << name << " is a Dog." << std::endl;
}

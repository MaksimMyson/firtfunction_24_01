#ifndef DOG_H
#define DOG_H

#include "pet.h"

/**
 * @brief The Dog class represents a dog, a type of pet.
 */
class Dog : public Pet {
public:
    /**
     * @brief Constructor for initializing a dog with a name.
     *
     * @param dogName Name of the dog.
     */
    Dog(const std::string& dogName);

    // Implementation of virtual functions
    void Sound() const override;
    void Type() const override;
};

#endif // DOG_H

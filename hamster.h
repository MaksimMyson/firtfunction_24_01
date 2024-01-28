#ifndef HAMSTER_H
#define HAMSTER_H

#include "pet.h"

/**
 * @brief The Hamster class represents a hamster, a type of pet.
 */
class Hamster : public Pet {
public:
    /**
     * @brief Constructor for initializing a hamster with a name.
     *
     * @param hamsterName Name of the hamster.
     */
    Hamster(const std::string& hamsterName);

    // Implementation of virtual functions
    void Sound() const override;
    void Type() const override;
};

#endif // HAMSTER_H

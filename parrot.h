#ifndef PARROT_H
#define PARROT_H

#include "pet.h"

/**
 * @brief The Parrot class represents a parrot, a type of pet.
 */
class Parrot : public Pet {
public:
    /**
     * @brief Constructor for initializing a parrot with a name.
     *
     * @param parrotName Name of the parrot.
     */
    Parrot(const std::string& parrotName);

    // Implementation of virtual functions
    void Sound() const override;
    void Type() const override;
};

#endif // PARROT_H

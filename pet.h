#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>

/**
 * @brief The Pet class serves as the base class for different types of pets.
 */
class Pet {
protected:
    std::string name;  // Name of the pet

public:
    /**
     * @brief Constructor for initializing the pet with a name.
     *
     * @param petName Name of the pet.
     */
    Pet(const std::string& petName);

    /**
     * @brief Produces the sound of the pet.
     */
    virtual void Sound() const = 0;

    /**
     * @brief Displays the name of the pet.
     */
    void Show() const;

    /**
     * @brief Displays the type of the pet.
     */
    virtual void Type() const = 0;

    /**
     * @brief Destructor for proper cleanup.
     */
    virtual ~Pet() {}
};

#endif // PET_H

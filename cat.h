#ifndef CAT_H
#define CAT_H

#include "pet.h"

/**
 * @brief The Cat class represents a cat, a type of pet.
 */
class Cat : public Pet {
public:
    /**
     * @brief Constructor for initializing a cat with a name.
     *
     * @param catName Name of the cat.
     */
    Cat(const std::string& catName);

    // Implementation of virtual functions
    void Sound() const override;
    void Type() const override;
};

#endif // CAT_H

#ifndef LIST_H
#define LIST_H

#include <iostream>

/**
 * @brief The List class serves as the base class for Stack and Queue.
 */
class List {
public:
    virtual void insert(int value) = 0;  // Virtual function for insertion
    virtual void remove() = 0;  // Virtual function for removal
    virtual void display() const = 0;  // Virtual function to display the content
    virtual ~List() {}  // Virtual destructor for proper cleanup
};

#endif // LIST_H

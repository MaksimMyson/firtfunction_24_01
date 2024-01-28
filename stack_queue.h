#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include "list.h"
#include <stack>
#include <queue>

/**
 * @brief The Stack class represents a stack implemented using the List base class.
 */
class Stack : public List {
private:
    std::stack<int> data;  // Internal data storage for the stack

public:
    // Implementation of virtual functions
    void insert(int value) override;
    void remove() override;
    void display() const override;
};

/**
 * @brief The Queue class represents a queue implemented using the List base class.
 */
class Queue : public List {
private:
    std::queue<int> data;  // Internal data storage for the queue

public:
    // Implementation of virtual functions
    void insert(int value) override;
    void remove() override;
    void display() const override;
};

#endif // STACK_QUEUE_H

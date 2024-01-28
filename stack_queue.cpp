#include "stack_queue.h"

void Stack::insert(int value) {
    data.push(value);
}

void Stack::remove() {
    if (!data.empty()) {
        data.pop();
    }
}

void Stack::display() const {
    std::cout << "Stack: ";
    std::stack<int> temp = data;

    while (!temp.empty()) {
        std::cout << temp.top() << " ";
        temp.pop();
    }

    std::cout << std::endl;
}

void Queue::insert(int value) {
    data.push(value);
}

void Queue::remove() {
    if (!data.empty()) {
        data.pop();
    }
}

void Queue::display() const {
    std::cout << "Queue: ";
    std::queue<int> temp = data;

    while (!temp.empty()) {
        std::cout << temp.front() << " ";
        temp.pop();
    }

    std::cout << std::endl;
}

#include "stack_queue.h"

int main() {
    // Create instances of Stack and Queue
    Stack myStack;
    Queue myQueue;

    // Insert and display elements in Stack
    myStack.insert(1);
    myStack.insert(2);
    myStack.insert(3);
    myStack.display();

    // Remove an element and display Stack again
    myStack.remove();
    myStack.display();

    // Insert and display elements in Queue
    myQueue.insert(4);
    myQueue.insert(5);
    myQueue.insert(6);
    myQueue.display();

    // Remove an element and display Queue again
    myQueue.remove();
    myQueue.display();

    return 0;
}

#include <iostream>
#include "stack.h"

int main() {
    stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.top() << std::endl; // should be 30
    stack.pop();

    std::cout << "Top after pop: " << stack.top() << std::endl; // should be 20
    std::cout << "Size: " << stack.size() << std::endl; // should be 2

    while (!stack.empty()) {
        std::cout << "Popped: " << stack.top() << std::endl;
        stack.pop();
    }

    std::cout << "Is stack empty? " << stack.empty()  << std::endl;

    return 0;
}

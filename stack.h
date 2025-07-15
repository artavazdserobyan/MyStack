#ifndef STACK_H
#define STACK_H

#include <vector>

class stack {
private:
    std::vector<int> data;

public:
    void push(int value);
    void pop();
    int top() const;
    bool empty() const;
    int size() const;
};

#endif

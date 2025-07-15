#include "stack.h"

void stack::push(int element){
       data.push_back(element);
    }

void stack::pop(){
    data.pop_back();
}

int stack::top() const{
    return data.back();
}
bool stack::empty() const{
    return data.empty();
}
int stack::size() const{
    return data.size();
}

#include <iostream>
#include "Stack.h"

void basic_test()
{
    Stack stack;
    std::cout << "======BASIC TEST======" << std::endl;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    std::cout << "Pop: expected 30, actual: " << stack.pop() << std:: endl;
    std::cout << "Pop: expected 20, actual: " << stack.pop() << std::endl;
}

void overflow_test()
{
    Stack stack;
    std::cout << "======OVERFLOW TEST======" << std::endl;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);

    std::cout << "Top of the stack after extension: expected 50, actual: " << stack.pop() << std::endl;
}

void empty_stack_test()
{
    Stack stack;
    std::cout << "======EMPTY STACK TEST======" << std::endl;
    
    if (stack.isEmpty())
    {
        std::cout << "Stack is empty" << std::endl;
    }

    // stack.pop();

}



int main(void)
{
    basic_test();
    overflow_test();
    empty_stack_test();

    return 0;
}


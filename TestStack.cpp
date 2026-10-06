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

void push_and_pop_test()
{
    Stack stack;
    std::cout << "======PUSH AND POP TEST =====" << std::endl;

    stack.push(100);
    stack.push(200);
    std::cout << "Pop after two pushes: expected 200, actual: " << stack.pop() << std::endl;
    
    stack.push(300);
    std::cout << "Pop after new push: expected 300, actual: " << stack.pop() << std::endl;
    std::cout << "Pop remaining element: expected 100, actual: " << stack.pop() << std::endl;
}

void two_stacks_test()
{
    std::cout << "======TWO STACKS TEST======" << std::endl;
    Stack s1;
    Stack s2;

    std::cout << "STACK 1:" << std::endl;
    s1.push(11);
    std::cout << "STACK 2:" << std::endl;
    s2.push(99);
    std::cout << "STACK 1:" << std::endl;
    s1.push(22);
    std::cout << "STACK 2:" << std::endl;
    s2.push(88);

    std::cout << "Pop from stack 1: expected 22, actual: " << s1.pop() << std::endl;
    std::cout << "Pop from stack 2: expected 88, actual: " << s2.pop() << std::endl;
    std::cout << "Pop from stack 1: expected 11, actual: " << s1.pop() << std::endl;
    std::cout << "Pop from stack 2: expected 99, actual: " << s2.pop() << std::endl;
}


void empty_stack_test()
{
    try
    {
        Stack stack;
        std::cout << "======EMPTY STACK TEST======" << std::endl;
        
        std::cout << "Check if stack is empty:" << std::endl;
        if (stack.isEmpty())
        {
            std::cout << "Stack is empty" << std::endl;
        }

        std::cout << "Try to pop empty stack:" << std::endl;
        stack.pop();
    }
    catch(const std::out_of_range &e)
    {
        std::cout << e.what() << std::endl;
    }

}


void copy_stack_test()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    Stack s(stack);

    stack.displayStack();
    s.displayStack();
}


int main(void)
{
    basic_test();
    overflow_test();
    push_and_pop_test();
    two_stacks_test();
    empty_stack_test();
    copy_stack_test();
    return 0;
}


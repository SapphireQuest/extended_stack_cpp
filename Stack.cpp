#include <iostream> 
#include "Stack.h"


Stack::Stack()
{
    top = 0;
    capacity = 2;
    data = new int[capacity];
}

Stack::~Stack()
{
    delete[] data;
    data = nullptr;
}

bool Stack::isEmpty()
{
    return top==0;
}

void Stack::push(int element)
{
    if (top >= capacity)
    {
        capacity *= 2;
        int *newData = new int[capacity];
        for (int num = 0; num < top; num++)
        {
            newData[num] = data[num];
        }
        delete[] data;
        data = newData;
    }
    data[top] = element;
    top++;
    std::cout << "Push: " << element << std::endl;
}

int Stack::pop()
{
    if (isEmpty())
    {
        std::cout << "Stack is empty, not possible to pop" << std::endl;
        delete[] data;
        data = nullptr;
        std::exit(1);
    }
    top--;
    int element = data[top];
    return element;
}

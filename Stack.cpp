#include <iostream> 
#include "Stack.h"


Stack::Stack()
{
    top = 0;
    capacity = 2;
    data = new int[capacity];
}

Stack::Stack(const Stack &s)
{
    top = s.top; 
    capacity = (s.top) + 1;
    data = new int[capacity];

    for (int num = 0; num < top; num++)
    {
        data[num] = s.data[num];
    }
}


Stack::~Stack()
{
    delete[] data;
    data = nullptr;
}

bool Stack::isEmpty() const
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
        throw std::out_of_range("Stack is empty, not possible to pop");
    }
    top--;
    int element = data[top];
    return element;
}

void Stack::displayStack() const
{
    for (int num = 0; num < top; num++)
    {
        std::cout << data[num] << std::endl;
    }
}

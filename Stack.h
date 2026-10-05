#pragma once


class Stack
{
    private:
        int *data;
        int capacity;
        int top;
    public:
        Stack();
        ~Stack();

        bool isEmpty();
        void push(int element);
        int pop();
};


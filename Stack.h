#pragma once


class Stack
{
    private:
        int *data;
        int capacity;
        int top;
    public:
        Stack();
        Stack(const Stack &s);
        ~Stack();
        Stack& operator=(const Stack &s);

        bool isEmpty() const;
        void push(int element);
        int pop();
        void displayStack() const;
};


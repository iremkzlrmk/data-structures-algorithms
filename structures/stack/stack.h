#pragma once

template <typename T> 
class Stack {

    private:

    int top;
    std::vector<T>* items;

    public:

    Stack(int size);
    bool isEmpty();
    bool isFull();
    int count();
    T peek();
    void push(T value);
    T pop();
    void display();

};
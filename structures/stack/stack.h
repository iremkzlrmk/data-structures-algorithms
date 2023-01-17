#pragma once
#include <iostream>
#include <vector>

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
        void push(T value);
        T pop();
        T peek();
        void display();
};
#pragma once

#include <iostream>
#include <vector>

template <typename T> 
class Stack {

    private:

        int top;
        std::vector<T>* items;

    public:

        Stack(int size) {
            this->top = -1;
            this->items = new std::vector<T>(size);
        }

        bool isEmpty() {
            return this->top == -1;
        }

        bool isFull() {
            return this->top == this->items->size()-1;
        }

        int count() {
            return this->top+1;
        }

        void push(T value) {

            if (this->isFull()) {
                std::cout << "stack is full" << std::endl;
                return;
            }

            items->at(++this->top) = value;
        }

        T pop() {

            if (this->isEmpty()) {
                std::cout << "stack is empty, nothing to pop here.." << std::endl;
                return NULL;
            }

            this->top--;
            return this->items->at(this->top+1);
        }

        T peek() {

            if (this->isEmpty()) {
                return NULL;
            }

            return this->items->at(this->top);
        }

        void display() {

            if (this->isEmpty()){
                std::cout << "stack is empty" << std::endl;
                return;
            } 

            for (int i=0; i < this->count(); i++) {
                std::cout << items->at(i) << std::endl;
            }
        }
};
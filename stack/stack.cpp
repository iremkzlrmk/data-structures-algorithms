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

    T peek() {

        if (this->isEmpty()) {
            return NULL;
        }

        return this->items->at(this->top);
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

    void display() {

        if (this->isEmpty()){
            std::cout << "stack is empty" << std::endl;
            return;
        } 

        for (int i = 0; i < this->count(); i++) {
            std::cout << items->at(i) << std::endl;
        }

    }

};


int main(){

    Stack<int> stack(5);

    std::cout << std::boolalpha << "is empty: " << stack.isEmpty() << std::endl;
    std::cout << std::boolalpha << "is full: " << stack.isFull() << std::endl;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.pop();

    std::cout << stack.pop() << std::endl;
    
    std::cout << stack.peek() << std::endl;

    stack.display();

    return 0;
}
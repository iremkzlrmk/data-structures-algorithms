#include "stack.h"

int main(){


    Stack<int> stack(5);

    std::cout << "* pop ~ empty case: " << stack.pop() << std::endl;
    stack.display();

    std::cout << "* push ~ empty case" << std::endl;
    stack.push(3);
    stack.display();

    std::cout << "* pop ~ single case: " << stack.pop() << std::endl;
    stack.display();

    std::cout << "* peek ~ empty case: " << stack.peek() << std::endl;
    stack.display();
    
    stack.push(4);
    std::cout << "* peek ~ single case: " << stack.peek() << std::endl;
    stack.display();

    stack.push(5);
    stack.push(6);
    stack.push(7);
    std::cout << "* peek ~ multiple case: " << stack.peek() << std::endl;
    stack.display();

    std::cout << "* pop ~ empty case: " << stack.pop() << std::endl;
    stack.display();
}
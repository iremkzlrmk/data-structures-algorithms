#include <iostream>
#include <string>
#include "../structures/stack/stack.cpp"
#include "../structures/stack/stack.h"
#include "../structures/queue/queue.cpp"
#include "../structures/queue/queue.h"

bool isPalindrome(int input){

    // initialize an array to store chars
    char* digits = (char*) malloc(sizeof(char));

    // convert int to char and store it in the array
    int i = 0;
    for (auto x : std::to_string(input)){
        *(digits+i) = x;
        i++;
    }

    Stack<int> stack(i);
    struct Queue<int>* queue = createQueue<int>(i);

    // push chars into the stack
    for (int j=0; j < i; j++){
        stack.push((*(digits+j)) - 48);
    }

    // enqueue chars into queue
    for (int j=0; j < i; j++){
        enqueue(queue, (*(digits+j)) - 48);
    }

    // check whether popped and dequeued values match, if so -> palindrome
    for (int j=0; j < i; j++){

        if (stack.pop() != dequeue(queue)){
            return false;
        }
    }

    return true;
}

int main() {

    int input = 123321;

    std::cout << std::boolalpha << isPalindrome(input) << std::endl;

    return 0;
}
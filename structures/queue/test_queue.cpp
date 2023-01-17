#include "queue.h"

int main() {

    struct Queue<int>* queue = createQueue<int>(3);

    std::cout << "* dequeue ~ empty case: " << std::endl;
    dequeue(queue);
    std::cout << "\n";

    std::cout << "* enqueue ~ empty case" << std::endl;
    enqueue(queue, 3);
    display(queue);

    std::cout << "* dequeue ~ single case: " << std::endl;
    dequeue(queue);
    display(queue);

    std::cout << "* head ~ empty case: " << head(queue) << std::endl;
    display(queue);

    enqueue(queue, 4); 
    std::cout << "* head ~ single case: " << head(queue) << std::endl;
    display(queue);

    enqueue(queue, 5); 
    enqueue(queue, 6);
    std::cout << "* head ~ multiple case: " << head(queue) << std::endl;
    display(queue);

    enqueue(queue, 7);
    std::cout << "* head ~ full case: " << head(queue) << std::endl;
    display(queue);

    std::cout << "* dequeue ~ multiple case: " << std::endl;
    dequeue(queue);
    display(queue);

    return 0;
}
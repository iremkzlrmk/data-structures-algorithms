#pragma once

#include <iostream>

template <typename T>
struct Queue {

    int size;
    T head;
    T tail; 
    T* items;
};


template <typename T>
struct Queue<T>* createQueue(int size) {

    struct Queue<T>* queue = (struct Queue<T>*)malloc(sizeof(struct Queue<T>));
    queue->size = size;
    queue->head = queue->tail = -1;

    queue->items = (T*)malloc(size * sizeof(T));
    return queue;  
};

template <typename T>
bool isFull (Queue<T>* queue) {

    return queue->tail == queue->size - 1;
}

template <typename T>
bool isEmpty (Queue<T>* queue) {

    return queue->tail == - 1;
}

template <typename T>
void enqueue(Queue<T>* queue, T value) {

    if (isFull(queue)) {
        std::cout << "queue is full.." << std::endl;
        return;
    } 

    if (isEmpty(queue)) {
        queue->head++;
        queue->tail++;
        queue->items[queue->tail] = value;
        return;
    }
    
    queue->tail++;
    queue->items[queue->tail] = value;
}

template <typename T>
T dequeue(Queue<T>* queue) {

    if (isEmpty(queue)){
        std::cout << "queue is empty.." << std::endl;
        return NULL;
    }

    if (queue->head == queue->tail){
        T dequeued = queue->items[queue->head];
        queue->head = queue->tail = -1;
        return dequeued;
    }

    T dequeued = queue->items[queue->head]; 

    for (int i=0; i < queue->tail; i++){
        queue->items[i] = queue->items[i+1];
    }

    queue->items[queue->tail] = NULL;
    queue->tail--;
    
    return dequeued;
}

template <typename T>
void display(Queue<T>* queue) {

    if (isEmpty(queue)){
        std::cout << "queue is empty.." << std::endl;
        std::cout << "\n";
        return;
    }

    for (int i=0; i < queue->tail+1; i++) {
        if (i != queue->tail){
            std::cout << queue->items[i] << " <- ";
        } else {
            std::cout << queue->items[i] << std::endl;
        }
    }

    std::cout << "\n";
}

template <typename T>
T head(Queue<T>* queue) {

    if (isEmpty(queue)){
        return NULL;
    }

    return queue->items[queue->head];
}

template <typename T>
T tail(Queue<T>* queue) {

    if (isEmpty(queue)){
        return NULL;
    }

    return queue->items[queue->tail];
}


// template <typename T>
// struct Queue<T>* createQueue(int size);

// template <typename T>
// bool isFull (Queue<T>* queue);

// template <typename T>
// bool isEmpty (Queue<T>* queue);

// template <typename T>
// void enqueue(Queue<T>* queue, T value);

// template <typename T>
// T dequeue(Queue<T>* queue);

// template <typename T>
// void display(Queue<T>* queue);

// template <typename T>
// T head(Queue<T>* queue);

// template <typename T>
// T tail(Queue<T>* queue);
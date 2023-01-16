#pragma once 

template <typename T>
struct Queue {

    int size;
    T head;
    T tail; 
    T* items;
};

template <typename T>
struct Queue<T>* createQueue(int size);

template <typename T>
bool isFull (Queue<T>* queue);

template <typename T>
bool isEmpty (Queue<T>* queue);

template <typename T>
void enqueue(Queue<T>* queue, T value);

template <typename T>
void dequeue(Queue<T>* queue);

template <typename T>
void display(Queue<T>* queue);

template <typename T>
T head(Queue<T>* queue);

template <typename T>
T tail(Queue<T>* queue);
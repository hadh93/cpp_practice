//
// Created by hoond on 2024-01-13.
//

#include "main.h"
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    explicit Node(int value) : data(value), next(nullptr){}
};

class myQueue{
public:
    Node* head;
    Node* tail;
    myQueue() : head(nullptr), tail(nullptr) {}
    void enqueue(int value);
    void dequeue();
    void print() const;
    ~myQueue();
};

void myQueue::enqueue(int value) {
    Node* newNode = new Node(value);
    if (!head){
        head = tail = newNode;
    } else{
        tail->next = newNode;
        tail = newNode;
    }
}

void myQueue::dequeue() {
    if (!head){
        cout << "The Queue is empty." << endl;
    } else{
        Node* temp = head;
        head = temp->next;
        delete temp;
    }
}

void myQueue::print() const {
    Node* current = head;
    if (!current){
        cout << "The Queue is empty.";
    }
    while (current){
        cout << current->data << "-";
        current = current->next;
    }
    cout << endl;
}

myQueue::~myQueue() {
    while (head){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
}


int main(){
    myQueue myQueue;
    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);
    myQueue.enqueue(4);
    myQueue.enqueue(5);
    myQueue.print();
    myQueue.dequeue();
    myQueue.print();
    myQueue.~myQueue();
    return 0;
}
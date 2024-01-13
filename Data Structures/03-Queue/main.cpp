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
    myQueue mq;
    int inp;
    while(1){
        cout << "Type a number. 1. enqueue / 2. dequeue / 3. end" << endl;
        cin >> inp;
        switch(inp){
            case 1:
                cout << "Data to enqueue:";
                cin >> inp;
                mq.enqueue(inp);
                mq.print();
                break;
            case 2:
                mq.dequeue();
                mq.print();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid input." << endl;
        }
    }
    return 0;
}
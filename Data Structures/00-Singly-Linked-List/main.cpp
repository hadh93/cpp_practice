//
// Created by hoond on 2024-01-14.
//

#include "main.h"
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    explicit Node(int value) : data(value), next(nullptr) {}
};

class SinglyLinkedList{
public:
    Node* head;
    Node* tail;
    SinglyLinkedList() : head(nullptr), tail(nullptr) {}

    void append(int value){
        Node* newNode = new Node(value);
        if (!head){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void display(){
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

};

int main(){
    SinglyLinkedList myList;
    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);
    cout << "Singly Linked List:";
    myList.display();
    return 0;
}
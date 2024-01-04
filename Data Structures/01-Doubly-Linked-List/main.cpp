//
// Created by hoond on 2024-01-04.
//

#include "main.h"
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
    explicit Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void append(int value){
        Node* newNode = new Node(value);
        if (!head){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            newNode->prev = tail;
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
    ~DoublyLinkedList(){
        Node* current = head;
        while (current){
            Node* temp = current;
            current = current->next;
            if (current != nullptr){
                delete temp;
            }
        }
        head = tail = nullptr;
    }


};

int main(){
    DoublyLinkedList myList;
    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);
    cout << "Doubly Linked List:";
    myList.display();
    return 0;
}
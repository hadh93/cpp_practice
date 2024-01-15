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

    int find(int value){
        Node* current = head;
        int index = 0;
        while (current){
            if (current->data == value){
                return index;
            }
            current = current->next;
            index++;
        }
        return -1;
    }

};

int main(){
    SinglyLinkedList myList;
    int inp;
    while(1){
        cout << "Type a number. 1. append / 2. find / 3. display / 4.end" << endl;
        cin >> inp;
        switch(inp){
            case 1:
                cout << "Data to append:";
                cin >> inp;
                myList.append(inp);
                myList.display();
                break;
            case 2:
                cout << "Data to find:";
                cin >> inp;
                cout << myList.find(inp) << endl;
                myList.display();
                break;
            case 3:
                myList.display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid input." << endl;
        }
    }
    return 0;
}
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
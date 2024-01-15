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

    void deleteNode(int value) {
        Node *current = head;
        Node *prev;

        if (find(value) == -1){
            return;
        }

        if (head->data == value) {
            if (head->next) {
                Node *temp = head;
                head = head->next;
                delete temp;
            } else {
                Node *temp = head;
                head = tail = nullptr;
            }
            return;
        }
        prev = current;
        current = current->next;
        while (current) {
            if (current->data == value) {
                Node *temp = current;
                prev->next = current->next;
                delete temp;
                if (current == tail) {
                    tail = prev;
                }
                return;
            }
            prev = prev->next;
            current = current->next;
        }
    }
};

int main(){
    SinglyLinkedList myList;
    int inp;
    while(1){
        cout << "Type a number. 1. append / 2. find / 3. delete / 4. display / 5. end" << endl;
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
                cout << "Data to delete:";
                cin >> inp;
                myList.deleteNode(inp);
                myList.display();
                break;
            case 4:
                myList.display();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid input." << endl;
        }
    }
    return 0;
}
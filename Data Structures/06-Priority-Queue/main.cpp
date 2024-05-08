//
// Created by hoond on 2024-05-08.
//

#include "main.h"
#include <iostream>
using namespace std;

struct item {
    int value;
    int priority;
};

item pr[100000];

int pq_size = -1;

void enqueue(int value, int priority){
    pq_size++;
    pr[pq_size].value = value;
    pr[pq_size].priority = priority;
}

int peak(){
    int highestPriority = INT_MIN;
    int ind = -1;

    for (int i=0; i <= pq_size; i++){
        if (highestPriority == pr[i].priority && ind >-1 && pr[ind].value < pr[i].value){
            highestPriority = pr[i].priority;
            ind = i;
        } else if (highestPriority < pr[i].priority){
            highestPriority = pr[i].priority;
            ind = i;
        }
    }
    return ind;
}

void dequeue(){
    int ind = peak();
    for (int i = ind; i < pq_size; i++){
        pr[i] = pr[i+1];
    }
    pq_size--;
}


int main(){
    enqueue(10,2);
    enqueue(14,4);
    enqueue(16,4);
    enqueue(12,3);

    int ind = peak();
    cout << pr[ind].value << endl;

    dequeue();

    ind = peak();
    cout << pr[ind].value << endl;

    return 0;
}
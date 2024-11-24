//
// Created by hoond on 2024-11-24.
//

#include "main.h"
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class BinaryHeap {
private:
    vector<int> heap;

    // Helper functions
    int parent(int i) { return (i - 1) / 2; }
    int left(int i) { return 2 * i + 1; }
    int right(int i) { return 2 * i + 2; }

    // Heapify-Up: Restore the heap property after insertion
    void heapifyUp(int i) {
        while (i != 0 && heap[parent(i)] > heap[i]) {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

    // Heapify-Down: Restore the heap property after removal
    void heapifyDown(int i) {
        int smallest = i;
        int l = left(i);
        int r = right(i);

        if (l < heap.size() && heap[l] < heap[smallest])
            smallest = l;
        if (r < heap.size() && heap[r] < heap[smallest])
            smallest = r;

        if (smallest != i) {
            swap(heap[i], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:
    // Insert a new element into the heap
    void insert(int val) {
        heap.push_back(val);        // Add the new element to the end
        heapifyUp(heap.size() - 1); // Restore heap property
    }

    // Extract the minimum element (root) from the heap
    int extractMin() {
        if (heap.empty())
            throw out_of_range("Heap is empty");

        int root = heap[0];
        heap[0] = heap.back(); // Move the last element to the root
        heap.pop_back();       // Remove the last element
        heapifyDown(0);        // Restore heap property

        return root;
    }

    // Get the minimum element without removing it
    int getMin() {
        if (heap.empty())
            throw out_of_range("Heap is empty");
        return heap[0];
    }

    // Print the heap
    void printHeap() {
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
};

int main(){
    BinaryHeap minHeap;
    int inp;
    while(1){
        cout << "Type a number. 1. insert / 2. extractMin / 3. getMin / 4. printHeap / 5. end" << endl;
        cin >> inp;
        switch(inp){
            case 1:
                cout << "Data to insert:";
                cin >> inp;
                minHeap.insert(inp);
                minHeap.printHeap();
                break;
            case 2:
                cout << "Extracted min value:";
                cout << minHeap.extractMin() << endl;
                break;
            case 3:
                cout << "Min value:";
                cout << minHeap.getMin() << endl;
                break;
            case 4:
                minHeap.printHeap();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid input." << endl;
        }
    }
    return 0;
}

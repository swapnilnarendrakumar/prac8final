// Dai(a1837470), Dil(a1825200), Swapnil(a1848855), Duong(a1876928)
#ifndef KLARGEST_H
#define KLARGEST_H
#include "Heap.tpp"
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kth_largest(std::vector<int> values, int k) {
    if (k == 0) return 0;
    // Create a max-heap priority queue
    priority_queue<int> max_heap;

    // Insert all elements from the vector into the max-heap
    for (int value : values) {
        max_heap.push(value);
    }

    // Pop the largest (k-1) elements
    for (int i = 0; i < k - 1; i++) {
        max_heap.pop();
    }

    // The kth largest element is now at the top of the max-heap
    return max_heap.top();
}

#endif
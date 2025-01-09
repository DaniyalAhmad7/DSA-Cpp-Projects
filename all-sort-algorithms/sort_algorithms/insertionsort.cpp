#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    int iterations = 0;  // Count iterations

    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            ++iterations;  // Count each comparison
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }

    cout << "Insertion Sort - Iterations: " << iterations << endl;
}


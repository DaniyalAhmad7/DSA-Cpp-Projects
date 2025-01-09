#include <iostream>
#include <vector>
#include "sort_algorithms/bubblesort.cpp"
#include "sort_algorithms/selectionsort.cpp"
#include "sort_algorithms/insertionsort.cpp"
#include "sort_algorithms/mergesort.cpp"
#include "sort_algorithms/quicksort.cpp"

using namespace std;

// Function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Function to get array input from the user
vector<int> getArrayInput(int size) {
    vector<int> arr(size);
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    return arr;
}

int main() {
    int choice;
    int size;

    while (true) {
        cout << "\nSorting Algorithms\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Selection Sort\n";
        cout << "3. Insertion Sort\n";
        cout << "4. Merge Sort\n";
        cout << "5. Quick Sort\n";
        cout << "0. Exit\n";
        cout << "Enter your choice (0-5): ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the program...\n";
            break;
        }

        cout << "Enter the size of the array: ";
        cin >> size;

        vector<int> arr = getArrayInput(size);

        cout << "Original array: ";
        printArray(arr);

        // Reset iteration counters before sorting
        quickSortIterations = 0;
        mergeSortIterations = 0;

        switch (choice) {
            case 1:
                bubbleSort(arr);
                break;
            case 2:
                selectionSort(arr);
                break;
            case 3:
                insertionSort(arr);
                break;
            case 4:
                mergeSort(arr, 0, arr.size() - 1);
                cout << "Iterations are: " << mergeSortIterations << endl;
                break;
            case 5:
                quickSort(arr, 0, arr.size() - 1);
                cout << "Iterations are: " << quickSortIterations << endl;
                break;
            default:
                cout << "Invalid choice, please try again.\n";
                continue;
        }

        cout << "Sorted array: ";
        printArray(arr);
    }

    return 0;
}


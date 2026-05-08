#include <iostream>
using namespace std;

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"

void printArray(int arr[], int size, int current = -1, int minimum = -1) {

    for (int i = 0; i < size; i++) {

        // Current index being checked
        if (i == current)
            cout << YELLOW << "[" << arr[i] << "] " << RESET;

        // Minimum element found
        else if (i == minimum)
            cout << GREEN << "[" << arr[i] << "] " << RESET;

        else
            cout << arr[i] << " ";
    }

    cout << endl;
}

void selectionSort(int arr[], int size) {

    cout << CYAN << "Initial Array: " << RESET;
    printArray(arr, size);

    for (int i = 0; i < size - 1; i++) {

        int minIndex = i;

        cout << "\n" << RED 
             << "Step " << i + 1 
             << ": Finding minimum from index " << i 
             << RESET << endl;

        printArray(arr, size, i, minIndex);

        // Find minimum element
        for (int j = i + 1; j < size; j++) {

            cout << "Comparing "
                 << arr[j]
                 << " with current minimum "
                 << arr[minIndex]
                 << endl;

            if (arr[j] < arr[minIndex]) {

                minIndex = j;

                cout << GREEN
                     << "New minimum found: "
                     << arr[minIndex]
                     << RESET << endl;

                printArray(arr, size, j, minIndex);
            }
        }

        // Swap
        cout << CYAN
             << "Swapping "
             << arr[i]
             << " and "
             << arr[minIndex]
             << RESET << endl;

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

        cout << GREEN << "Array after swap: " << RESET;
        printArray(arr, size);
    }
}

int main() {

    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    cout << "\n" << GREEN
         << "Final Sorted Array: "
         << RESET;

    printArray(arr, size);

    return 0;
}
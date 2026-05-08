#include <iostream>
using namespace std;

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"

void printArray(int arr[], int size, int current1 = -1, int current2 = -1) {

    for (int i = 0; i < size; i++) {

        // Highlight compared elements
        if (i == current1 || i == current2)
            cout << YELLOW << "[" << arr[i] << "] " << RESET;
        else
            cout << arr[i] << " ";
    }

    cout << endl;
}

void bubbleSort(int arr[], int size) {

    cout << CYAN << "Initial Array: " << RESET;
    printArray(arr, size);

    for (int i = 0; i < size - 1; i++) {

        cout << "\n" << RED
             << "Pass " << i + 1
             << RESET << endl;

        for (int j = 0; j < size - i - 1; j++) {

            cout << "Comparing "
                 << arr[j]
                 << " and "
                 << arr[j + 1]
                 << endl;

            printArray(arr, size, j, j + 1);

            // Swap if needed
            if (arr[j] > arr[j + 1]) {

                cout << GREEN
                     << "Swapping "
                     << arr[j]
                     << " and "
                     << arr[j + 1]
                     << RESET << endl;

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                cout << CYAN << "Array after swap: " << RESET;
                printArray(arr, size);
            }
        }

        cout << GREEN
             << "End of Pass " << i + 1
             << RESET << endl;

        printArray(arr, size);
    }
}

int main() {

    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    cout << "\n" << GREEN
         << "Final Sorted Array: "
         << RESET;

    printArray(arr, size);

    return 0;
}
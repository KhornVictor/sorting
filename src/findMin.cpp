#include <iostream>

int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6, -10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minElement = findMin(arr, n);
    std::cout << "The minimum element in the array is: " << minElement << std::endl;

    return 0;
}
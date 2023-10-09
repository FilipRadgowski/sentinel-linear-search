#include <iostream>

int sentinelLinearSearch(const int arr[], int n, int x) {
    int last = arr[n - 1];  // Store the last element
    arr[n - 1] = x;         // Set sentinel

    int i = 0;
    while (arr[i] != x) {
        ++i;
    }

    arr[n - 1] = last;  // Restore the last element

    if (i < n - 1 || arr[n - 1] == x) {
        return i;  // Element found, return its index
    } else {
        return -1;  // Element not found
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int result = sentinelLinearSearch(arr, n, x);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}

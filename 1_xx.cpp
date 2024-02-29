#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Function to perform linear search
bool linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        cout << "Linear Search - Checking index " << i << ": " << arr[i] << endl;
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

// Function to perform binary search (Assumes array is sorted)
bool binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        cout << "Binary Search - Checking index " << mid << ": " << arr[mid] << endl;
        
        if (arr[mid] == key)
            return true;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

// Function to sort the array using bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

int main() {
    int arr[] = {4, 23, 47, 15, 62, 9, 35, 33};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 15;

    // Linear Search
    auto start = high_resolution_clock::now();
    bool found = linearSearch(arr, n, key);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Linear Search - Element " << key << " Found: " << boolalpha << found << endl;
    cout << "Time taken by Linear Search: " << duration.count() << " microseconds" << endl << endl;

    // Sorting array before binary search
    bubbleSort(arr, n);
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Binary Search
    start = high_resolution_clock::now();
    found = binarySearch(arr, 0, n - 1, key);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Binary Search - Element " << key << " Found: " << found << endl;
    cout << "Time taken by Binary Search: " << duration.count() << " microseconds" << endl;

    return 0;
}

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Function to check uniqueness without sorting
bool isUniqueNoSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << "Comparing " << arr[i] << " with " << arr[j] << endl;
            if (arr[i] == arr[j]) {
                return false;
            }
        }
    }
    return true;
}

// Function to sort the array using bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

// Function to check uniqueness after sorting
bool isUniqueWithSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "Comparing " << arr[i] << " with " << arr[i+1] << endl;
        if (arr[i] == arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {4, 23, 47, 15, 62, 9, 35, 33};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Check uniqueness without sorting
    auto start = high_resolution_clock::now();
    bool unique = isUniqueNoSort(arr, n);
    auto stop = high_resolution_clock::now();
    auto durationNoSort = duration_cast<microseconds>(stop - start);
    cout << "Uniqueness without sorting: " << (unique ? "Unique" : "Not Unique") << endl;
    cout << "Time taken without sorting: " << durationNoSort.count() << " microseconds" << endl << endl;

    // Sort the array
    bubbleSort(arr, n);
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Check uniqueness with sorting
    start = high_resolution_clock::now();
    unique = isUniqueWithSort(arr, n);
    stop = high_resolution_clock::now();
    auto durationWithSort = duration_cast<microseconds>(stop - start);
    cout << "Uniqueness with sorting: " << (unique ? "Unique" : "Not Unique") << endl;
    cout << "Time taken with sorting: " << durationWithSort.count() << " microseconds" << endl;

    return 0;
}

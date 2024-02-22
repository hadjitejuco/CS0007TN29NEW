#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        cout << "Checking element at index " << mid << ": " << arr[mid] << endl;
        if (arr[mid] == x) return mid; // Element found
        else if (arr[mid] < x) {
            cout << "Searching right half after index " << mid << endl;
            left = mid + 1;
        } else {
            cout << "Searching left half before index " << mid << endl;
            right = mid - 1;
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {3, 6, 8, 12, 15, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 15;

    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

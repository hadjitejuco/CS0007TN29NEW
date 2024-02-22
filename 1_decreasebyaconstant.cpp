#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        cout << "Iteration " << i << ": Checking element " << arr[i] << endl;
        if (arr[i] == x) return i; // Element found
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {3, 6, 8, 12, 15, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 15;

    int result = linearSearch(arr, n, x);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

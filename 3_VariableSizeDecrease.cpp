#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        cout << "Before inserting " << key << ": ";
        for (int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << endl;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;

            cout << "After moving " << arr[j + 1] << ": ";
            for (int k = 0; k < n; k++) cout << arr[k] << " ";
            cout << endl;
        }
        arr[j + 1] = key;

        cout << "After inserting " << key << ": ";
        for (int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << "\n";
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Initial array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n\n";

    insertionSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

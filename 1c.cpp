#include <iostream>
#include <string>
using namespace std;

void printArray(int arr[], int n, const string& prefix) {
    cout << prefix;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//(Bubble Sort) 
void sortArray(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        printArray(arr, n, "After iteration " + to_string(i+1) + ": ");
    }
}

void printUniqueElements(int arr[], int n) {
    cout << "Unique elements: ";
    for (int i = 0; i < n; i++) {
        cout << "Checking " << arr[i] << ": ";
        // Check if the current element is not equal to the next element or it is the last element
        if ((i == n-1) || (arr[i] != arr[i+1])) {
            cout << "Unique" << endl;
            cout << arr[i] << " ";
        } else {
            cout << "Duplicate, skipping" << endl;
            // Skip over the next element if it is a duplicate
            while (i < n-1 && arr[i] == arr[i+1]) {
                i++;
            }
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 7, 2, 4, 7, 8, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n, "");

    // Sort the array with simulation
    sortArray(arr, n);

    // Print unique elements with simulation
    printUniqueElements(arr, n);

    return 0;
}

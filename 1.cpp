#include <iostream>
using namespace std;

void printUniqueElements(int arr[], int n) {
    cout << "Checking for unique elements..." << endl;
    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        cout << "Checking element " << arr[i] << ": ";
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                cout << "Found another " << arr[j] << " at position " << j << ". ";
                break;
            }
        }
        if (isUnique) {
            cout << "It's unique!";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {4, 2, 7, 2, 4, 7, 8, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printUniqueElements(arr, n);

    return 0;
}

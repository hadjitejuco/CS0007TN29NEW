#include <iostream>
using namespace std;

// Function to check for a pair with a given sum in the array
void findPairWithSum(int arr[], int n, int sum) {
    bool pairFound = false;
    cout << "Searching for pairs that sum to " << sum << "..." << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << "Checking pair (" << arr[i] << ", " << arr[j] << ")... ";
            if (arr[i] + arr[j] == sum) {
                cout << "Pair found!" << endl;
                cout << "Pair with the given sum: (" << arr[i] << ", " << arr[j] << ")" << endl;
                pairFound = true;
                return; // Exiting after finding the first pair
            } else {
                cout << "Does not sum to " << sum << "." << endl;
            }
        }
    }
    if (!pairFound) {
        cout << "No pair with the given sum found." << endl;
    }
}

int main() {
    int arr[] = {1, 2, 4, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 9;

    findPairWithSum(arr, n, sum);

    return 0;
}

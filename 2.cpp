#include <iostream>
using namespace std;

//find all pairs with given sum using brute force
void findAllPairsWithSum(int arr[], int n, int sum) {
    cout << "Searching for all pairs that sum to " << sum << "..." << endl;
    bool pairFound = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << "Checking pair (" << arr[i] << ", " << arr[j] << ")... ";
            if (arr[i] + arr[j] == sum) {
                cout << "Sum is " << sum << ". Pair found." << endl;
                pairFound = true;
            } else {
                cout << "Sum is " << arr[i] + arr[j] << ". No match." << endl;
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

    findAllPairsWithSum(arr, n, sum);

    return 0;
}

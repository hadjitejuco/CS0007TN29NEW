//Polynomial Complexity (O(n^k))

#include <iostream>
#include <chrono>
using namespace std;

void polynomialComplexity(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                for (int l = 0; l < n; ++l) {
                    cout << "Operation on: (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ", " << arr[l] << ")" << endl;
                }
            }
        }
    }
}

int main() {
    int arr[] = {1, 2};
    int n = 2; // Size of the array

    auto start = chrono::high_resolution_clock::now();

    polynomialComplexity(arr, n);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> execution_time = end - start;

    cout << "Execution time for n = " << n << ": " << execution_time.count() << " ms" << endl;

    return 0;
}

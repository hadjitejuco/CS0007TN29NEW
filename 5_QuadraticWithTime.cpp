//Quadratic Complexity (O(n^2))

#include <iostream>
#include <chrono>
using namespace std;

void quadraticComplexity(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Processing pair: (" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = 3; // Size of the array

    auto start = chrono::high_resolution_clock::now();

    quadraticComplexity(arr, n);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> execution_time = end - start;

    cout << "Execution time for n = " << n << ": " << execution_time.count() << " ms" << endl;

    return 0;
}

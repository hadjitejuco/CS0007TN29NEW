//Linear Complexity (O(n))
#include <iostream>
#include <chrono>
using namespace std;

void linearComplexity(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Processing element: " << arr[i] << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5; // Size of the array

    auto start = chrono::high_resolution_clock::now();

    linearComplexity(arr, n);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> execution_time = end - start;

    cout << "Execution time for n = " << n << ": " << execution_time.count() << " ms" << endl;

    return 0;
}

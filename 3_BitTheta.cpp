#include <iostream>
#include <chrono>
using namespace std;
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    auto start = chrono::high_resolution_clock::now();
    int sum = sumArray(arr, 5);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> execution_time = end - start;

    cout << "Sum: " << sum << "\n";
    cout << "Execution time: " << execution_time.count() << " ms\n";

    return 0;
}

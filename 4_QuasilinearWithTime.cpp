//Quasilinear Complexity (O(n log n))
#include <iostream>
#include <chrono>
using namespace std;

void quasilinearComplexity(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; j *= 2) {
            cout << "Operation on i = " << i << ", j = " << j << endl;
        }
    }
}

int main() {
    int n = 100000000; // Example input size

    auto start = chrono::high_resolution_clock::now();

    quasilinearComplexity(n);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> execution_time = end - start;

    cout << "Execution time for n = " << n << ": " << execution_time.count() << " ms" << endl;

    return 0;
}

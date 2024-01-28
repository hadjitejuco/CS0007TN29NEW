//Logarithmic Complexity (O(log n))
#include <iostream>
#include <chrono>
using namespace std;

void logarithmicComplexity(int n) {
    for (int i = 1; i < n; i *= 2) {
        cout << "Operation on i = " << i << endl;
    }
}

int main() {
    int n = 1000000000; // Example input size

    auto start = chrono::high_resolution_clock::now();

    logarithmicComplexity(n);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> execution_time = end - start;

    cout << "Execution time for n = " << n << ": " << execution_time.count() << " ms" << endl;

    return 0;
}

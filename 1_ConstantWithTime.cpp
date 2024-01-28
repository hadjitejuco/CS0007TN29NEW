//Constant Complexity (O(1)) with time execution
#include <iostream>
#include <chrono>
using namespace std;

void constantComplexity() {
    int fixedOperation = 1 + 2; // A simple constant time operation
    cout << "Result: " << fixedOperation << endl;
}

int main() {
    auto start = chrono::high_resolution_clock::now();

    constantComplexity();

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> execution_time = end - start;

    cout << "Execution time: " << execution_time.count() << " ms" << endl;

    return 0;
}

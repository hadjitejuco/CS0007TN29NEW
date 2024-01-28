#include <iostream>
#include <chrono>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    cout << "Fibonacci Sequence Execution Time Simulation\n";
    cout << "---------------------------------------------\n";
    for (int n = 0; n <= 50; ++n) {  // You can adjust the maximum value of n based on your patience!
        auto start = chrono::high_resolution_clock::now();

        // Calculate Fibonacci number
        int result = fibonacci(n);

        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double, std::milli> execution_time = end - start;

        cout << "Fibonacci(" << n << ") = " << result
                  << "\t- Execution Time: " << execution_time.count() << " ms\n";
    }

    return 0;
}

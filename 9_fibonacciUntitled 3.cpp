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
    for (int n = 5; n <= 40; n += 5) { // Increasing n in steps
        auto start = chrono::high_resolution_clock::now();
        int result = fibonacci(n);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double, std::milli> duration = end - start;
        cout << "Fibonacci(" << n << ") = " << result << " in " << duration.count() << " ms\n";
    }
    return 0;
}

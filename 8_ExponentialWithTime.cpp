//Exponential Complexity (O(2^n))

#include <iostream>
#include <chrono>
using namespace std;

int fibonacci(int n) {
   if (n <= 1) {
      return n;
   }
   return fibonacci(n-1) + fibonacci(n-2);
}

void exponentialComplexity(int n) {
   auto start = chrono::high_resolution_clock::now();
   
   cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
   
   auto end = chrono::high_resolution_clock::now();
   chrono::duration<double, milli> execution_time = end - start;
   
   cout << "Execution time: " << execution_time.count() << " ms" << endl;
}

int main() {
   int n = 10; // Example input, increase for more complexity
   exponentialComplexity(n);
   return 0;
}

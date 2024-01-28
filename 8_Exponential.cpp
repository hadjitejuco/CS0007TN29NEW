//Exponential Complexity (O(2^n))
//Exponential complexity often involves recursive functions where each function call branches into more calls. A classic example is the calculation of the Fibonacci sequence:
#include <iostream>
using namespace std;
int fibonacci(int n) {
   
   if (n <= 1) {
      return n;
   }
   return fibonacci(n-1) + fibonacci(n-2);
}

void exponentialComplexity(int n) {
   std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;
}

int main() {
   int n = 5; // Example input, increase for more complexity
   exponentialComplexity(n);
   return 0;
}

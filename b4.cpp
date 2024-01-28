#include <iostream>
using namespace std;
long bruteForceFactorial(int n);


int main() {
    // Run a simulation for factorials from 0 to 20
    for (int i = 0; i <= 20; ++i) {
        long factorial = bruteForceFactorial(i);
        cout << i << "! = " << factorial << endl;
    }

    return 0;
}

// Function to compute n factorial using brute force
long bruteForceFactorial(int n) {
    if (n == 0)
        return 1; // Factorial of 0 is 1
    
    long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

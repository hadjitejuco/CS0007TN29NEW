#include <iostream>
using namespace std;

double bruteForcePower(double a, int n);


int main() {
    // Simulated inputs
    double simulatedBases[] = {2, 3, 5, 7};
    int simulatedExponents[] = {2, 3, 0, 1};

    // Run the simulation
    for (int i = 0; i < 4; ++i) {
        double a = simulatedBases[i];
        int n = simulatedExponents[i];

        // Calculate a^n using brute force
        double result = bruteForcePower(a, n);

        // Output the result
        cout << "Simulated: " << a << " raised to the power of " << n << " is: " << result << endl;
    }

    return 0;
}

// Function to compute a raised to the power of n using brute force
double bruteForcePower(double a, int n) {
    if (n == 0)
        return 1; // Anything raised to the power of 0 is 1
    
    double result = 1;
    while (n > 0) {
        result *= a;
        --n;
    }
    return result;
}

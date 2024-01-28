#include <iostream>
using namespace std;

double power(double a,  int n);

int main() {
    double a;
    int n;

    // Input base and exponent from the user
    cout << "Enter the base (a > 0): ";
    cin >> a;

    cout << "Enter the exponent (n as a nonnegative integer): ";
    cin >> n;

    // Check if the base is positive
    if(a <= 0) {
        cout << "The base must be greater than 0." << endl;
        return 1; // Return with error
    }

    // Compute a^n
    double result = power(a, n);

    // Output the result
    cout << a << " raised to the power of " << n << " is " << result << endl;

    return 0;
}

// Function to compute a raised to the power of n
double power(double a,  int n) {
    double result = 1;
    for ( int i = 0; i < n; ++i) {
        result *= a;
    }
    return result;
}

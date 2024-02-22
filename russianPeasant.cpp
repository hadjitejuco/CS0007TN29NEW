#include <iostream>
using namespace std;
int main() {
    int num1, num2, product = 0;

    // Get the input numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Initial addition to the product if num1 is odd
    if (num1 % 2 != 0)
        product = product + num2;

    cout << "Multiplicand Multiplier Product" << endl;
    cout << "\t" << num1 << "\t" << num2 << endl;

    // Loop for Russian Multiplication
    while (num1 != 1) {
        num1 = num1 / 2;
        num2 = num2 * 2;

        // Add to product if num1 is odd
        if (num1 % 2 != 0)
            product = product + num2;

        // Print current state
        cout << "\t" << num1 << "\t" << num2 << "\t" << product << endl;
    }

    // Final result
    cout << "The product is: " << product << endl;

    return 0;
}

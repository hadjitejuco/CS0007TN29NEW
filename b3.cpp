#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

double bruteForcePower(double a, unsigned int n) ;

int main() {
    ofstream file("base_exponent_pairs.txt");

    // Seed the random number generator
    srand(static_cast<int>(time(nullptr)));

    // Generate 100 random bases and exponents and write them to the file
    for (int i = 0; i < 1000; ++i) {
        double base = rand() % 10 + 1; // Random base between 1 and 10
        int exponent = rand() % 21; // Random exponent between 0 and 20
        file << base << ' ' << exponent << '\n';
    }

    file.close();

    // Now, read the file and simulate the power calculations
    ifstream inputFile("base_exponent_pairs.txt");
    double base;
    int exponent;

    while (inputFile >> base >> exponent) {
        
        double result = bruteForcePower(base, exponent);

        cout << " Base: " << base << ", Exponent: " << exponent << " => " << base << "^" << exponent << " = " << result << endl;
    }

    inputFile.close();

    return 0;
}
double bruteForcePower(double a, unsigned int n) {
    double result = 1;
    for (int i = 0; i < n; ++i) {
        result *= a;
    }
    return result;
}


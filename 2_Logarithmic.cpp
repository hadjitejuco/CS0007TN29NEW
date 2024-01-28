//Logarithmic Complexity (O(log n))
//We simulate logarithmic complexity by halving the input size in each step.
#include <iostream>
using namespace std;
void logarithmicComplexity(int n) {
    for (int i = 1; i < n; i *= 2) {
        cout << "Operation on i = " << i << endl;
    }
}

int main() {
    logarithmicComplexity(1000); // Example input size
    return 0;
}

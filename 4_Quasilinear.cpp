//Quasilinear Complexity (O(n log n))
//This is simulated by a loop within a loop, where the inner loop has logarithmic complexity.
#include <iostream>
using namespace std;
void quasilinearComplexity(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; j *= 2) {
            cout << "Operation on i = " << i << ", j = " << j << endl;
        }
    }
}

int main() {
    quasilinearComplexity(10);
    return 0;
}

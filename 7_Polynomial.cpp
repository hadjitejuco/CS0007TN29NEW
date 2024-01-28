//Polynomial Complexity (O(n^k))
//For a polynomial complexity example, we'll simulate a scenario with four nested loops (k = 4).


#include <iostream>
using namespace std;
void polynomialComplexity(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                for (int l = 0; l < n; ++l) {
                    cout << "Operation on: (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ", " << arr[l] << ")" << endl;
                }
            }
        }
    }
}

int main() {
    int arr[] = {1, 2};
    polynomialComplexity(arr, 2);
    return 0;
}


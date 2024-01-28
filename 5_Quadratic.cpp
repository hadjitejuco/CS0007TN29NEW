//Quadratic Complexity (O(n^2))
//Quadratic complexity involves two nested loops, each dependent on the input size.
#include <iostream>
using namespace std;
void quadraticComplexity(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Processing pair: (" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};
    quadraticComplexity(arr, 3);
    return 0;
}

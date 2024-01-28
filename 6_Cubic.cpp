//Cubic Complexity (O(n^3))
//Cubic complexity can be simulated with three nested loops.
#include <iostream>

void cubicComplexity(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                std::cout << "Processing triplet: (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << std::endl;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2};
    cubicComplexity(arr, 2);
    return 0;
}

//Cubic Complexity (O(n^3))
#include <iostream>
#include <chrono>
using namespace std;
void cubicComplexity(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                cout << "Processing triplet: (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2};
    int n = 2; // Size of the array
    
    auto start = std::chrono::high_resolution_clock::now();
    
    cubicComplexity(arr, n);
    
    auto end = std::chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> execution_time = end - start;
    
    cout << "Execution time for n = " << n << ": " << execution_time.count() << " ms" << endl;
    
    return 0;
}

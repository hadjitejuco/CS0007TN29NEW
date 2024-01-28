#include <iostream>
#include <chrono>
using namespace std;
bool linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {3, 5, 2, 4, 9};
    int x = 10; // Worst-case scenario (last element or not found)

    auto start = chrono::high_resolution_clock::now();
    bool found = linearSearch(arr, 5, x);
    auto end = chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> execution_time = end - start;

    cout << "Element found: " << boolalpha << found << "\n";
    cout << "Execution time: " << execution_time.count() << " ms\n";

    return 0;
}

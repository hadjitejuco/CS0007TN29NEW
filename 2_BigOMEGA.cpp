#include <iostream>
#include <chrono>
using namespace std;
bool linearSearchBestCase(int arr[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {3, 5, 2, 4, 9};
    int x = 3; // Best-case scenario (first element)

    auto start = chrono::high_resolution_clock::now();
    bool found = linearSearchBestCase(arr, 5, x);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> execution_time = end - start;

    cout << "Element found: " << boolalpha << found << "\n";
    cout << "Execution time: " << execution_time.count() << " ms\n";

    return 0;
}

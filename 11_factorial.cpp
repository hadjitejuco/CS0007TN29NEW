// factorial time complexity (O(n!))
#include <iostream>
#include <chrono>
using namespace std;
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void generatePermutations(int arr[], int startingIndex, int n) {
    if (startingIndex == n) {
        printArray(arr, n);
        return;
    }

    for (int i = startingIndex; i < n; ++i) {
        swap(arr[startingIndex], arr[i]);
        generatePermutations(arr, startingIndex + 1, n);
        swap(arr[startingIndex], arr[i]); // backtrack
    }
}

int main() {
    int n = 9; // The size of the array
    int arr[] = {1, 2, 3, 4,5,6,7,8,9};

    auto start = chrono::high_resolution_clock::now();

    generatePermutations(arr, 0, n);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> execution_time = end - start;

    cout << "Total execution time: " << execution_time.count() << " ms\n";

    return 0;
}

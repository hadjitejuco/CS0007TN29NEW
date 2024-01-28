#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int x, int& steps) {
  steps = 0; // Initialize steps to 0
  for (int i = 0; i < n; i++) {
    steps++; // Increment steps for each comparison
    if (arr[i] == x) {
      return i;  // Element found, return index
    }
  }
  return -1;  // Element not found
}

int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int x = 10;  // Element to be searched
  int n = sizeof(arr) / sizeof(arr[0]);  // Size of the array

  int result, steps;

  result = linearSearch(arr, n, x, steps);

  if (result == -1) {
    cout << "Element not found in the array" << endl;
  } else {
    cout << "Element found at index: " << result << endl;
  }

  // Demonstrating best, average, and worst cases:

  // Best case: x = 2 (found at the first position)
  x = 2;
  result = linearSearch(arr, n, x, steps);
  cout << "Best case (element found at first position): " << result << endl;
  cout << "Number of steps: " << steps << endl;

  // Average case: x = 4 (found in the middle)
  x = 4;
  result = linearSearch(arr, n, x, steps);
  cout << "Average case (element found in the middle): " << result << endl;
  cout << "Number of steps: " << steps << endl;

  // Worst case: x = 50 (not found or found at the last position)
  x = 50;
  result = linearSearch(arr, n, x, steps);
  cout << "Worst case (element not found): " << result << endl;
  cout << "Number of steps: " << steps << endl;

  return 0;
}
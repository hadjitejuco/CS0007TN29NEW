//Linear Complexity (O(n))
//Linear complexity involves a single loop over the input.
#include <iostream>
using namespace std;
void linearComplexity(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Processing element: " << arr[i] << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    linearComplexity(arr, 5);
    return 0;
}

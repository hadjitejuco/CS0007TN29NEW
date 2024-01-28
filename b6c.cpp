#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateNumbersAndSaveToFile(const string& filename) {
    ofstream file(filename);
    srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator

    for (int i = 0; i < 100; i++) {
        int number = rand() % 100; // Generate random number between 0 and 99
        file << number << " ";
    }

    file.close();
}

void readNumbersFromFile(const string& filename, int arr[], int& n) {
    ifstream file(filename);
    n = 0; // Initialize the count

    while (file >> arr[n]) {
        n++;
    }

    file.close();
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void searchAndPrintOccurrences(int arr[], int n, int x) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = true;
            cout << "Element found at index: " << i << endl;
        }
    }

    if (!found) {
        cout << "Element not found in the array." << endl;
    }
}

int main(void) {
    string filename = "numbers.txt";
    int arr[100]; // Assuming there won't be more than 100 numbers
    int n = 0; // Actual number count will be set by readNumbersFromFile

    // Generate random numbers and save them to a file
    generateNumbersAndSaveToFile(filename);

    // Read numbers from file into array
    readNumbersFromFile(filename, arr, n);

    // Display the random numbers on the screen
    cout << "The random numbers are: " << endl;
    printArray(arr, n);

    // Ask the user for the number to search for
    int x;
    cout << "\nEnter the number to search for: ";
    cin >> x;

    // Search and print all occurrences
    searchAndPrintOccurrences(arr, n, x);

    return 0;
}

#include <iostream>
using namespace std;
const int V = 4;  // Number of vertices in the graph

// Function to calculate the cost of the tour
int calculateTourCost(const int tour[], const int weights[][V], int size) {
    int cost = weights[tour[size - 1]][tour[0]]; // Return to starting vertex cost
    for (int i = 0; i < size - 1; ++i) {
        cost += weights[tour[i]][tour[i + 1]];
    }
    return cost;
}

// Function to print the tour
void printTour(const int tour[], int size) {
    for (int i = 0; i < size; i++) {
        cout << static_cast<char>('a' + tour[i]) << " -> ";
    }
    cout << static_cast<char>('a' + tour[0]);
}

// Recursive function to generate permutations of the path
void permute(int *tour, int start, int end, int weights[][V]) {
    if (start == end) {
        printTour(tour, V);
        cout << ": Cost = " << calculateTourCost(tour, weights, V) << endl;
        return;
    }
    for (int i = start; i <= end; i++) {
        swap(tour[start], tour[i]);
        permute(tour, start + 1, end, weights);
        swap(tour[start], tour[i]); // backtrack
    }
}

int main() {
    // Graph representation - adjacency matrix
    int weights[V][V] = {
        {0, 2, 8, 5}, // a to b, c, d
        {2, 0, 3, 4}, // b to a, c, d
        {8, 3, 0, 7}, // c to a, b, d
        {5, 4, 7, 0}  // d to a, b, c
    };

    // Array to hold the tour starting with 'a' and ending with 'a'
    int tour[V] = {0, 1, 2, 3}; // Representing vertices a, b, c, d

    cout << "All unique tours and their costs starting and ending at 'a':" << endl;
    permute(tour, 1, V - 1, weights); // Fix the first vertex and permute the rest

    return 0;
}

#include <iostream>

const int V = 4; // Number of vertices in the graph

// Function to calculate the cost of the tour
int calculateTourCost(const int tour[], const int weights[][V], int size) {
    int cost = 0;
    for (int i = 0; i < size - 1; ++i) {
        cost += weights[tour[i]][tour[i + 1]];
    }
    // Add the cost of returning to the starting node to complete the cycle
    cost += weights[tour[size - 1]][tour[0]];
    return cost;
}

// Function to print the tour
void printTour(const int tour[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << static_cast<char>('a' + tour[i]) << " -> ";
    }
    std::cout << static_cast<char>('a' + tour[0]); // to complete the cycle
}

// Recursive function to generate permutations of the path
void permute(int *tour, int start, int end, int weights[][V]) {
    if (start == end) {
        printTour(tour, V);
        std::cout << ": Cost = " << calculateTourCost(tour, weights, V) << std::endl;
        return;
    }
    for (int i = start; i <= end; i++) {
        std::swap(tour[start], tour[i]);
        permute(tour, start + 1, end, weights);
        std::swap(tour[start], tour[i]); // backtrack
    }
}

int main() {
    // Graph representation - adjacency matrix based on the provided graph
    int weights[V][V] = {
        {0, 2, 5, 7}, // a to b, c, d
        {2, 0, 8, 3}, // b to a, c, d
        {5, 8, 0, 1}, // c to a, b, d
        {7, 3, 1, 0}  // d to a, b, c
    };

    // Array to hold the tour starting with 'a' and ending with 'a'
    int tour[V] = {0, 1, 2, 3}; // Representing vertices a, b, c, d

    std::cout << "All unique tours and their costs starting and ending at 'a':" << std::endl;
    permute(tour, 1, V - 1, weights); // Fix the first vertex and permute the rest

    return 0;
}

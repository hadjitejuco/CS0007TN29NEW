// A naive C++ solution to count solutions of
// a + b + c = n
//Given a number n, find a number of ways we can add 3 non-negative integers so that their sum is n.
/*
Input : n = 1
Output : 3
There are four ways to get sum 1.
(1, 0, 0), (0, 1, 0) and (0, 0, 1)

Input : n = 2
Output : 6
There are six ways to get sum 2.
(2, 0, 0), (0, 2, 0), (0, 0, 2), (1, 1, 0)
(1, 0, 1) and (0, 1, 1)

Input : n = 3
Output : 10
There are ten ways to get sum 10.
(3, 0, 0), (0, 3, 0), (0, 0, 3), (1, 2, 0)
(1, 0, 2), (0, 1, 2), (2, 1, 0), (2, 0, 1),
(0, 2, 1) and (1, 1, 1)
*/

#include<iostream>
using namespace std;
 
// Returns count of solutions of a + b + c = n
int countIntegralSolutions(int n)
{
    // Initialize result
    int result = 0;
 
    // Consider all triplets and increment
    // result whenever sum of a triplet is n.
    for (int i=0; i<=n; i++)
      for (int j=0; j<=n-i; j++)
          for (int k=0; k<=(n-i-j); k++)
            if (i + j + k == n){
              cout << "("<< i << ", " << j <<", "<< k << ")"<<endl;
              result++;
            }
    return result;
}
 
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout <<  countIntegralSolutions(n);
    return 0;
}
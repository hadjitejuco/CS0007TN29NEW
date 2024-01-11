/******************************************************************************
sumIterative
sumRecursive

*******************************************************************************/

#include <iostream>
using namespace std;
int sumIterative(int n);
int sumRecursive(int n); 
int main()
{
    cout << "Iterative " <<endl;
    cout << sumIterative(5) <<endl;

    cout << "Recursive " <<endl;
    cout << sumRecursive(5) <<endl;

    return 0;
}

int sumIterative(int n)
{
    int result=0;
    for (int i = 1; i<=n; i++){
        result += i;
        
    }
    return result;
        
    
}

int sumRecursive(int n)  //5. 4. 3 2. 1
{
    
    //base case
    if (n==1) return 1;
    return n + sumRecursive(n-1);
}







#include <iostream>

using namespace std;
//prototype
void headRecursion(int height);
void tailRecursion(int height);

int main()
{
    cout << "Head recursion "<<endl;
    headRecursion();
    
    cout << "Tail Recursion" <<endl;
    tailRecursion();

    return 0;
}
void headRecursion(int height)
{
    //base case
    if (height==0) return;
   
    headRecursion(height-1);
    cout << height << endl;
    
}
void tailRecursion(int height)
{
    //base case
    if (height==0) return;
    cout << height << endl;
    tailRecursion(height-1);
    
    
}

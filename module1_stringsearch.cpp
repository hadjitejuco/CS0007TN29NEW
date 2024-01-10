/******************************************************************************
search string 
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
//prototype
int searchString(string arr[],int size, string target);
int main()
{
    string arr[]={"apple","banana","date", "grapes"};
    int n = sizeof(arr)/sizeof(arr[0]);
    string target;
    
    cout << "Enter string to search  ";
    //cin >> target; //problem - add space apple 
    getline(cin,target); //string 
    
    int result = searchString(arr,n,target);
    if (result == -1)
        cout << "not present";
    else
        cout << "present ";
    return 0;
}

int searchString(string arr[],int size, string target)
{
    for (int i=0; i<size; i++){
        if (arr[i]==target)
            return i;
    }
    return -1;
}

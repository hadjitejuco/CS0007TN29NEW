/******************************************************************************

binary search

number to search 

mid = left + right - left / 2
if mid > + 1 -> move to the right 
if mid < -1  -> move to the left

*******************************************************************************/

#include <iostream>
using namespace std;
//prototype 
int binarySearch(int arr[], int l, int r, int x);

int main()
{
    //array make sure that the data is sorted 
    int arr[]={2,3,4,10,60,70,71};
    //size array 
    int n = sizeof(arr)/ sizeof(arr[0]);
    //search key 
    int x; 
    
    //search
    cout << "Enter number to search :";
    cin >> x;
    
    cout << "start the binary search ";
    int result = binarySearch(arr,0,n-1,x);

    if (result != -1)
        cout << "element found at index " << result << endl;
    return 0;
}

int binarySearch(int arr[], int l, int r, int x)
{
    while(l<=r){
        //mid 
        int m = l + (r-l)/2;
        //print current range of the search
        cout << "search range [" << l << ", "<<r<<"], ";
        cout << "\nMidpoint " << m << " value " << arr[m] << ") ...";
        
        //check if x is found at mid
        if (arr[m]==x){
            cout << "Match found \n";
            return m;
        }
        
        if (arr[m]<x){
            cout << "go to the right \n";
            l = m+1;
        }else{
            cout << "go to the left \n";
            r = m-1;
        }
    }
    cout << "element not found in the array \n";
    return -1;
}






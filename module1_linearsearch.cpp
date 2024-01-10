/******************************************************************************
sequencial search / linear search 

*******************************************************************************/

#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int x);
int main()
{
    //array
    int arr[]={2,3,0,1,9,5,8,3,7,6};
    //get size of the array
    int n = sizeof(arr)/sizeof(arr[0]);
    int x; //search 
    
    cout << "Enter number to search: ";
    cin >> x;
    
    cout << "Starting linear search: ";
    //index if found /  -1 if not found 
    int result  = linearSearch(arr,n,x);
    
    if (result==-1)
        cout << "element is not present in the array\n";
    else
        cout << "element was found at index "<<result<<endl;
    return 0;
}

int linearSearch(int arr[], int size, int x)
{
    for (int i=0; i<size;i++){
        //arr[]={2,3,0,1,9,5,8,3,7,6};
        //                         6                        
        if (arr[i]==x){
            cout << "Match found \n";
            return i; //index location 
        }else{
            cout << "No match \n";
        }
    }    
    return -1;
}



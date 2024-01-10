/******************************************************************************
ALGO 
    1. start
    2. compare each pair of adjacent element
        array[i] and array[i+1]
        if they are not desired order
            swap
                3 1 -> 1 3
    3.  process throughout the array 
    4.  repeat the process
    5.  stop

functions
    swap  -> algo swap()
        UDF - > swap
    printArray 
    bubbleSort
*******************************************************************************/

#include <iostream>
using namespace std;
//prototype
void swap (int &a, int &b);
void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);

int main()
{
    //create array and declare values
    int arr[]={64,34,25,12,22,11,90};
    //get the size of the array 
    //use the value for our loop later
    int n = sizeof(arr)/sizeof(arr[0]);
    //display the content of the original array 
    cout << "Original Array Value "<<endl;
    printArray(arr,n);
    
    //calls the sort algo
    bubbleSort(arr,n);
    
    cout << "Sorted Array "<<endl;
    printArray(arr,n);

    return 0;
}


void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
//arr, n 
void printArray(int arr[], int size)
{
    for (int i=0; i<size; i++)
        cout << arr[i] << " " ;
    cout << endl;
}
void bubbleSort(int arr[], int n)
{
    //outer loop
    for (int i=0; i<n-1;i++){
        //inner loop 
        for (int j=0; j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
        }
        cout << "Array after pass " << i+1 << ": ";
        printArray(arr, n);
    }
}


#include <iostream>
using namespace std;
//prototype
void swap (int &a, int &b);
void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);
int binarySearch(int arr[], int l, int r, int x);
int main()
{
    //create array and declare values
    int arr[]={64,34,25,12,22,11,90};
    //get the size of the array 
    //use the value for our loop later
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    //display the content of the original array 
    cout << "Original Array Value "<<endl;
    printArray(arr,n);
    
    //calls the sort algo
    bubbleSort(arr,n);
    
    cout << "Sorted Array "<<endl;
    printArray(arr,n);

    cout << "Enter number to search ";
    cin >> x;

    int result = binarySearch(arr,0,n-1,x);
    if (result == -1)
        cout << "Element not present in the array " <<endl;
    else
        cout << "Element is present at index " << result <<endl;

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
    bool swapped;
    for (int i=0; i<n-1;i++){
        swapped = false;
        
        for (int j=0; j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
            
        }
        cout << "Array after pass " << i+1 << ": ";
        for (int k = 0; k<n;k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
        if (!swapped) {
            break;
        }
    }
}
int binarySearch(int arr[], int l, int r, int x)
{
    while(l<=r){
        //mid 
        int m = l + (r-l)/2;
        //print current range of the search
        cout << "\nMidpoint " << m << "(value: " << arr[m] << ") ...\n";
        if (arr[m]==x){
            return m;
        }
        if (arr[m]<x){
            l = m+1;
        }else{
            r = m-1;
        }
    }
    return -1;
}

//array manipulation
#include <iostream>
using namespace std;

int main()
{
    //declare array data_type arrayname[elemens];
    int num[5]; //array int[0],...int[4];
    //ask the user to input 
    int i; //for loop
    for (i=0; i<5;i++){
        cout << "Enter value " << (i+1) << ":::";
        cin >> num[i];
    }
    //display the output
    cout << "\nThe elements of the array are ";
    for (i=0; i<5;i++){
        cout << " " << num[i];
    }
    
    

    return 0;
}

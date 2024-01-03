//perform operations
//average and sum of numbers
#include<iostream>
using namespace std;
int main(){
	float a[5],sum=0, avg=0; //array
	int i; //loop
	//input
	for (i=0; i<5;i++){
		cout << "Enter value: ";
		cin >> a[i]; 
	}
	for (i=0; i<5;i++){
		sum = sum+a[i];
	}
	cout << "the sum is: " << sum;
	avg = sum/5;
	cout << "\nthe avg is: " << avg;
	
	return 0;
}

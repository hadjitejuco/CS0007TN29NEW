//find the max and min value of array
#include <iostream>
using namespace std;
int main()
{
	int arr[5], i, min, max;
	//input value
	cout << "Enter five integers: ";
	for (i=0; i<5; i++){
		cin >> arr[i];
	}	
	//set the init value of min and max
	min = arr[0];
	max = arr[0];
	for (i=0; i<5;i++){
		if (min>arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	cout << "\nMAX value is  " << max;
	cout << "\nMIN value is  " << min;
	return 0;
}

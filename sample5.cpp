//searching
//linear search
//1 2 3 4 5 6 7 8 9 10
//                   10
//flag pos = -1;
#include <iostream>
using namespace std;
int main(){
	int num[10],i,x,pos=-1;
	//prompt
	cout << "Enter 10 integers: ";
	for (i=0; i<10; i++ ){
		cin >> num[i];
	}	
	cout << "Enter number to search: ";
	cin >> x;
	
	for (i=0; i<10; i++){
		if (x==num[i]) {
			pos = i+1;
			break;
		}
	}
	if (pos == -1)
		cout << "Element " << x << " not found ";
	else
		cout << "\nThe position of " << x << " is" <<pos;
		 
	return 0;
}

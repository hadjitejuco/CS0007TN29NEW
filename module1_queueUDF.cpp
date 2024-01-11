#include <iostream>
#define QUEUE_SIZE 5
using namespace std;

int queueArr[QUEUE_SIZE];
void dequeue();
void enqueue(int);
void display();
int front=-1;
int rear=-1;

int main()
{
	while(1)
	{
		int choice;
		system("clear");
		cout << "[1] - Enqueue\n";
		cout << "[2] - Dequeue\n";
		cout << "[3] - Display\n";
		cout << "[4] - Exit\n";
		cout << "===================\n";
		cout << "Enter your choice: ";
		cin >> choice;
		switch(choice){
			case 1: 
				int num;
				cout << "Enter a number to enqueue: ";
				cin >> num;
				enqueue(num);	
				display();
				break;
			case 2:
				dequeue();		
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				cout << "\nWrong choice!\n";
		}
		cout << endl;
		cin.ignore().get();
	}
	
	return 0;
}

void display()
{
	if(rear==-1 || front>rear)
		cout << "Queue is empty!";
	else
		for(int i=front; i<=rear; i++)
			cout << "[" << i << "] : " <<queueArr[i] << endl;
}

void enqueue(int n)
{
	if(rear<QUEUE_SIZE-1)
	{
		if(front==-1)
			front++;
		queueArr[++rear]=n;	
	}
	else
		cout << "Queue is overflow!";
}

void dequeue()
{
	if(rear<front || front==-1)
	{
		cout << "Queue is empty!";
		front=0;
		rear=-1;
	}
	else
		cout << "Dequeue value is " << queueArr[front++];
}

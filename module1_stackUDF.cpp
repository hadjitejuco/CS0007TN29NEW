/******************************************************************************



*******************************************************************************/

#include <iostream>
#define STACK_SIZE 5
using namespace std;
int stackNum[STACK_SIZE];
int top = -1;
//prototype

void push(int);
void pop();
void display();
void clear();

int main()
{
    while(1) {
        
        int choice, num;
        cout << "MENU\n";
        cout << "[1] PUSH\n";
        cout << "[2] Pop\n";
        cout << "[3] Display\n"; 
        cout << "[4] Clear\n";
        cout << "[5] Exit\n";
        
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            
            case 1:
                cout << "Enter number: ";
                cin >> num;
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                clear();
                break;
            case 5:
                exit(1);
            default:
                cout << "error";
                break;
        }
        cin.ignore();
    }

    return 0;
}


void push(int n)
{
    
    if (top==STACK_SIZE-1)
        cout << "Stack is full\n";
    else
        stackNum[++top]=n;
    
}
void pop()
{
     if (top==-1)
        cout << "Stack is empty\n";
    else
        cout << " you remove\n" << stackNum[top--];
    
}
void display()
{
    if (top==-1)
        cout << "Stack is empty\n";
    else
        for (int i = top; i>=0;i--)
            cout << stackNum[i] << endl;
    
    
    
}
void clear()
{
    top=-1;
    
}

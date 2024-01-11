/******************************************************************************
stack 
    LIFO 
operation
    push
    pop
    top 

stack library
UDF stack 

*******************************************************************************/

#include <iostream>
#include <stack>
//push, pop, top, size()
using namespace std;

int main()
{
    stack<int> nums;
    int i, x;
    cout << "Size of stack "<<nums.size()<<endl;
    nums.push(11);
    nums.push(22);
    nums.push(33);  //top
    cout << "Size of stack "<<nums.size()<<endl;
    cout << "Top " << nums.top()<<endl;
    // nums.pop();
    // cout << "Size of stack "<<nums.size()<<endl;
    // cout << "Top " << nums.top()<<endl;
    // nums.pop();
    // cout << "Size of stack "<<nums.size()<<endl;
    // cout << "Top " << nums.top()<<endl;
    // nums.pop();
    // cout << "Size of stack "<<nums.size()<<endl;
    for (i=nums.size();i>0;i--){
        x=nums.top();
        cout << x << endl;
        nums.pop();
        
    }
    cout << "Size of stack "<<nums.size()<<endl;
    return 0;
}

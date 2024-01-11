/******************************************************************************
QUEUE 
    FIFO 
Operation
    enqueue.  insert
    dequeue.  remove
    front()
    back()
    size()

library -> queue (push/pop)
UDF -> queue 


*******************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> grade;
    char quest;
    int n;
    cout << "Enter data y/n: ";
    cin >> quest;
    while(quest=='Y' || quest=='y')
    {
        cout << "Enter integer grade: ";
        cin >> n;
        grade.push(n);
        
        cout << "Enter data y/n: ";
        cin >> quest;
    }
    cout << "front element: "<<grade.front()<<endl;
    cout << "last element: " << grade.back()<<endl;
    cout << "size of queue: " << grade.size()<<endl;
    while(!grade.empty()){
        
        cout << grade.front()<<endl;
        grade.pop();
        
    }

    return 0;
}

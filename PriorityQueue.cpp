#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max heap
    priority_queue<int> maxheap;

    //min heap 
    priority_queue<int, vector<int> , greater<int> >minheap;

    cout<<"For MAX_HEAP \nelements pushed - "<<endl;
    for (int i = 0; i < 10; i++){
        maxheap.push(i);
    }
    int size = maxheap.size();
    for (int i = 0; i < size; i++)
    {
        cout<<maxheap.top()<<endl;
        maxheap.pop();
    }
    cout<<"Empty or not - "<<maxheap.empty()<<endl;

    cout<<"For MIN_HEAP \nelements pushed - "<<endl;
    for (int i = 0; i < 10; i++){
        minheap.push(i);
    }
    int size2 = minheap.size();
    for (int i = 0; i < size2; i++)
    {
        cout<<minheap.top()<<endl;
        minheap.pop();
    }
    cout<<"Empty or not - "<<minheap.empty();
    return 0;
}

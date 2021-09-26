#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    queue<int> que;
    for (int i = 0; i < 10; i++){
        que.push(i);
    }
    cout<<"Front most element in queue - "<<que.front()<<endl;
    cout<<"Last element in queue - "<<que.back()<<endl;
    cout<<"Size of the queue - "<<que.size()<<endl;
    cout<<"Empty or not - "<<que.empty()<<endl;
    que.pop(); // this pops the front most element in queue
    cout<<"After poping----------------"<<endl;
    cout<<"Front most element in queue - "<<que.front()<<endl;
    cout<<"Last element in queue - "<<que.back()<<endl;
    cout<<"Size of the queue - "<<que.size()<<endl;
    cout<<"Empty or not - "<<que.empty()<<endl;
    return 0;
}

#include<iostream>
#include<stack> // Header file
using namespace std;

int main(){
    stack<int> stk; // Declaration
    for(int i=0; i<10; i++){
        stk.push(i);
    }
    cout<<"Top element "<<stk.top()<<endl;
    
    // Pop function
    stk.pop();
    cout<<"After poping, top element - "<<stk.top()<<endl;

    // Size
    cout<<"Size - "<<stk.size()<<endl;

    // Empty
    cout<<"Empty or not - "<<stk.empty()<<endl;

    return 0;
}

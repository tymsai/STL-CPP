// In deque we can push & pop at both the front & back end of array
#include<iostream>
#include<deque>
using namespace std;

int main(){
    system("cls");
    deque<int> deq; // deque declared
    
    // Empty check
    cout<<"Empty or not = "<<deq.empty()<<endl;

    // push function
    cout<<"Elements inserted\n";
    for (int i = 0; i < 10; i+=2){
        deq.push_back(i); // initialize with for loop for ease
    }
    for (int i = 0; i < deq.size(); i++){
        cout<<deq[i]<<endl; // to view elements in deque
    }

    // Empty check
    cout<<"Empty or not = "<<deq.empty()<<endl;

    /* Begin & End
    cout<<"First element"<<deq.begin()<<endl;
    cout<<"Last element"<<deq.back()<<endl;*/

    // pop function
    deq.pop_front();
    deq.pop_back();
    cout<<"After Poping one from both front & back"<<endl;
    for (int i = 0; i < deq.size(); i++){
        cout<<deq[i]<<endl; // to view elements in deque
    }

    // erase function
    cout<<"after using erase function\n";
    deq.erase(deq.begin(), deq.begin()+2);
    for (int i = 0; i < deq.size(); i++){
        cout<<"\n"<<deq[i]; // to view elements in deque
    }
    cout<<"\nSize after erasing - "<<deq.size();
    return 0;
}

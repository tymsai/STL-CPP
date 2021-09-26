#include<iostream>
#include<list> // Headerfile
using namespace std;

int main(){
    list<int> lst; // Declaration

    /* Initialise with a certain number
    list<int> new_lst(5, 69);

    Copying the old list to a new one
    list<int> new_list(lst);*/

    lst.push_back(1);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    lst.push_back(6);
    lst.push_front(2);
    cout<<"After insertion elements are"<<endl;
    for(int i:lst){
        cout<<i<<endl;
    }

    // Erasing elements
    cout<<"After erasing"<<endl;
    lst.erase(lst.begin());
    for(int i:lst){
        cout<<i<<endl;
    }

    // Size 
    cout<<"Size of list is "<<lst.size()<<endl;
}

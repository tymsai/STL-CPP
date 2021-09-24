// Vector is a type of data structure. Vectors are dynamic (their size can be changed according to needs).
#include<iostream>
#include<vector> // In order to use the Template(C++ 14) of Vector DS, you must include the <vector> header file.

using namespace std;
int main(){
    vector<int> vect; // this statement declares a vector of integer data type using template
    cout<<"Capacity before initialization ( 0 elements ) - "<<vect.capacity()<<endl; // this shows the capacity of vector , initially it will be zero
    
    // Vector initilization
    /* Method - 1 */
    vect={10,20,30,40,50};  
    /* 
    Method - 2 
    vector<int> vect2(5); // Vector of capacity 5 initialised
    */
    cout<<"Capacity after initialization of 5 elements - "<<vect.capacity()<<endl; // this shows the capacity of vector
    vect.push_back(60); // push_back is used to input elements 
    cout<<"Capacity after push_back of new element (6th element) - "<<vect.capacity()<<endl; // the capacity of vector is doubled automaticly once it reaches it max size 
    cout<<"Size after push_back of new element (6th element) - "<<vect.size()<<endl; // the size of vector 

    // Size & Capacity both are different, size is total number of elements , capacity is the number of memory assigned (block)

    cout<<"Element at 2nd index - "<<vect.at(2)<<endl; // displaying element using at operation
    
    // Front & Back operations in vector 
    cout<<"Element at front is - "<<vect.front()<<endl;
    cout<<"Element at last is - "<<vect.back()<<endl;

    // pop_back function
    cout<<"Before Poping \n";
    for (int i = 0; i < vect.size(); i++){
        cout<<vect.at(i)<<endl;
    }
    vect.pop_back();
    cout<<"After pop_back\n";
    for (int i = 0; i < vect.size(); i++){
        cout<<vect.at(i)<<endl;
    }

    // clear function
    cout<<"Before using clear function\n";
    cout<<"size = "<<vect.size()<<endl;
    cout<<"capacity = "<<vect.capacity()<<endl;
    vect.clear();
    cout<<"After using clear function\n";
    cout<<"size = "<<vect.size()<<endl;
    cout<<"capacity = "<<vect.capacity();

    return 0;
}

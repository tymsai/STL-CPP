// Array is the most common data structure used. Arrays are static(Fixed size) in nature and can be of various data types such as integer , character, float, etc. 
#include<iostream>
#include<array> // In order to use the Template(C++ 14) of array DS, you must include the <array> header file.  

using namespace std;
int main(){
    array<int, 5> arr; // this statement declares a array of integer data type & of size 5 using template
    arr={10,20,30,40,50}; // initialization of the array 
    // Types of operations we can perform - at , empty , front , back
    cout<<arr.empty()<<endl; // This will tell if an array is empty or not, The output will be 0 or 1 (true or false) 
    cout<<arr.front()<<endl; // This shows the front most element of the array 
    cout<<arr.at(3)<<endl; // This shows the element at desired index element of the array
    cout<<arr.back()<<endl; // This shows the last element of the array
    return 0;
}

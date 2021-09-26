#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> setname;

    setname.insert(1);
    setname.insert(5);
    setname.insert(9);
    setname.insert(0);
    setname.insert(2);
    setname.insert(3);
    setname.insert(2);
    setname.insert(5);

    for (int i : setname)
    {
        cout << i << endl;
    }

    cout<<"After erase of index 4"<<endl;
    setname.erase(setname.upper_bound(4));
    for (int i : setname){
        cout << i << endl;
    }

    // Searching elements
    cout<<"9 is present - "<<setname.count(9)<<endl;
    cout<<"99 is present - "<<setname.count(99);
    return 0;
}

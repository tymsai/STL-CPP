#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> naksha;

    // Methods to initialize
    naksha[1] = "one";
    naksha[4] = "four";
    naksha[10] = "ten";
    naksha.insert({6, "six"});

    cout << "Before erasing" << endl;
    for (auto i : naksha)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "5 key present or not - " << naksha.count(5) << endl;
    //Erase function
    naksha.erase(10);
    cout << "after erasing 10th key" << endl;
    for (auto i : naksha)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}

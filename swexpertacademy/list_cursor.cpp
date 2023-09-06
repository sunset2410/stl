/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
list<int> mlist;
list<int>::iterator cursor;

void print() {
    for (auto it : mlist) {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    mlist.push_back(1);
    mlist.push_back(2);
    mlist.push_back(3);
    mlist.push_back(4);
    mlist.push_back(5);
    mlist.push_back(6);
    print();
    
    
    cursor = mlist.begin();
    advance(cursor, 3);
    cout << *cursor << endl;
    cursor --;
    cursor --;
    cursor = mlist.erase(cursor);
    print();
    cout << *cursor << endl;
    cursor = mlist.erase(cursor);
    print();
    cout << *cursor << endl;
    
    return 0;
}

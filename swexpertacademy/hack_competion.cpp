#include <bits/stdc++.h>
using namespace std;
list<char> mlist;
list<char>::iterator it;

void print() {
	int check = false;
	for ( auto it1 = mlist.begin(); it1 != mlist.end(); it1++) {
		cout << *it1 << " ";
		// if (it1 == it) {
		// 	 check = true;
		// 	 cout << "|";
		// }
	}
	// if(!check) cout << "|";
	// cout << endl;
}

// abcd|  : cursor = mlist.end();
// ab|cd  : cursor = &c;
// |abcd  : cursor = mlist.begin();

int main() {
	string s;
	string c;
	cin >> s >> c;
	//cout << s << endl;
	//cout << c << endl;
	
	for (int i = 0; i < s.length(); i++) {
		mlist.push_back(s[i]);
	}
	
	it = mlist.end();
	
	for (uint i = 0; i < c.length(); i++) {
		switch(c[i]) {
			case 'L':
				if (it != mlist.begin()) it--;
				//print();
				break;
			case 'R':
				if (it != mlist.end()) it++;
				//print();
				break;
			case 'B':
				if (it != mlist.begin()) {
					it--;
					it = mlist.erase(it);
					//print();
				}
				break;
			default:
				mlist.insert(it, c[i]);
				//print();
				break;
		}
	}
	
	print();
	
	return 0;
}

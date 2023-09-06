#include <bits/stdc++.h>
using namespace std;
int N; // number candidate;
int M; //number balot with score from 1 to 10;

struct candidate {
	string name;
	int index;
	int score;
};

candidate d[10000 + 5] {};

struct cmp {
	bool operator()(const int& id1, const int& id2) const {
		if (d[id1].score == d[id2].score) {
			return d[id1].index < d[id2].index;
		} else {
			return d[id1].score > d[id2].score;
		}
	}
};

unordered_map<string,int> mmap; // hash name to index in array
set<int, cmp> mset;

int main() {
	cin >> N;
	string name;
	for (int i = 0; i < N; i++) {
		cin >> name;
		mmap[name] = i;
		d[i].name = name;
		d[i].index = i;
		d[i].score = 0;	
	}
	
	cin >> M;
	//string name;
	int score;
	for (int i = 0; i < M; i++) {
		cin >> name >> score;
		auto it = mmap.find(name);
		if (it != mmap.end()) {
			int index = it->second;
			d[index].score += score;
			auto it2 = mset.find(index);
			if (it2 != mset.end()) {
				mset.erase(it2);
			} // end if it2
			mset.insert(index);		
			
			//print for test
			// for (auto item : mset) {
			// 	cout << d[item].name << "," << d[item].score << " ";
			// }
			// cout << endl;
			
			
		} // end if it
	} // end for i
	
	auto it = mset.begin();
	for (int i = 0; i < 3; i++) {
		cout << d[*it].name << " " << d[*it].score << endl;
		it ++;
	}
	return 0;
}

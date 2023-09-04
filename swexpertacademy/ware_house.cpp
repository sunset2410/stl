#include <bits/stdc++.h>
using namespace std;
int N;
int M;
int result = 1e7;
vector<pair<int,int>> canh[101];
int d[101];

struct cmp {
	bool operator()(int i1, int i2) {
		return d[i1] > d[i2];
	}
};

int main() {
	cin >> N >> M;
	int c1,c2,kc;
	for (int i = 0; i < M; i++) {
		cin >> c1 >> c2 >> kc;
		canh[c1].push_back({c2, kc});
		canh[c2].push_back({c1, kc});
	}
	
	// duyet tung dinh voi thuat toan dijtra
	
	for (int k = 1;k <= N; k++) {
		
		for (int i = 1; i <= N; i++) {
				d[i] = 1e7;
		}
		
		d[k] = 0;
		priority_queue<int, vector<int>, cmp> q;
		q.push(k);
		while (q.size() > 0) {
			int current = q.top();
			q.pop();
			for (auto item : canh[current]) {
				if(d[item.first] > d[current] + item.second) {
					d[item.first] = d[current] + item.second;
					q.push(item.first);
				}
			}
		}// end while
		
		int d_max = 0;
		for (int i = 1; i <= N; i++) {
			if (d_max < d[i]) {
				d_max = d[i];
			}
		}
		
		if (result > d_max) {
			result = d_max;
		}
	} // end for  loop  k
	
	cout << result << endl;
	return 0;
}

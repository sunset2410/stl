#include <bits/stdc++.h>
using namespace std;
int N, M;
int A[100005];
int cnt[11][100005]{};
int main() {
	cin >> N >> M;
	
	for (int i = 1; i <= M; i++ ) {
		cnt[i][0] = 0;
	}
	
	for (int i = 1; i <= N; i++) {
		cin >> A[i];
		for (int j = 1; j <= M; j++) {
			cnt[j][i] = cnt[j][i-1];
		}
		cnt[A[i]][i] = cnt[A[i]][i-1] + 1;
	}
	
	vector<int> mlist;
	for (int i = 1; i<= M; i++) {
		mlist.push_back(i);
	}
	
	vector<vector<int>> data;
	do {
		data.push_back(mlist);
	} while (next_permutation(mlist.begin(), mlist.end()));
	
	// in permutation cac type
	// for(auto item : data) {
	// 	for(auto number : item) {
	// 		cout << number << " ";
	// 	}
	// 	cout << endl;
	// }
	
	
	// print cnt of types
	// for (int i = 1; i <= M; i++) {
	// 	for (int j = 0; j <= N; j ++) {
	// 		cout << cnt[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	
	int min_diff = 1e8;
	for(auto item : data) {
		int cnt_diff = 0;
		int start = 1;
		int end;
		for(auto number : item) {
			end = start + cnt[number][N] -1;
			int cnt_temp = cnt[number][end] - cnt[number][start-1];
			cnt_diff += cnt[number][N] - cnt_temp;
			start = end + 1;
		}
		min_diff = min(min_diff, cnt_diff);
	}
	
	cout << min_diff << endl;
	return 0;
}

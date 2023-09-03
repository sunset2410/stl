#include <bits/stdc++.h>
using namespace std;
int N; //so hang;
int M; // so cot
int A[51][51];
int check[51][51] {};
int dx[4] = { 0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main() {
	cin >> N >> M;
	for(int i = 0; i< N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}
	
	// cout << "===========test---------" << endl;
	// for (int i = 0; i < N; i++) {
	// 	for (int j = 0; j < M; j ++) {
	// 		cout << A[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	// find first cell has value is 1
	pair<int,int> start;
	for (int i = 0; i < N; i++) 
		for (int j= 0; j < M; j++) {
			if (A[i][j] == 1) {
				start = {i,j};
				break;
			}
		}
	
	//vector ca so 0 bao quanh
	vector<pair<int,int>> group1;
	queue<pair<int,int>> q;
	q.push(start);
	check[start.first][start.second] = 1;
	A[start.first][start.second] = 3;
	while (q.size() > 0) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i< 4; i ++) {
			int X = x + dx[i];
			int Y = y + dy[i];
			if (X < 0 || X >= N || Y < 0 || Y >= M) continue;
			if (A[X][Y] == 1 && check[X][Y] == 0) {
				check[X][Y] = 1;
				q.push({X, Y});
				A[X][Y] = 3;
			} else if (A[X][Y] == 0 && check[X][Y] == 0){
				A[X][Y] = 4;
				check[X][Y] = 1;
				group1.push_back({X, Y});
			}
		} // end for
	} // end while
	
	// cout << "===========test 4---------" << endl;
	// for (int i = 0; i < N; i++) {
	// 	for (int j = 0; j < M; j ++) {
	// 		cout << A[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	
	// cout << "===========test 4---------" << endl;
	// for (int i = 0; i < N; i++) {
	// 	for (int j = 0; j < M; j ++) {
	// 		cout << check[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	
	int min_d = 100;
	for (int i = 0; i< group1.size(); i++) {
		queue<pair<int,int>> mqueue;
		int d[51][51] {};
		int visit[51][51]{};
		mqueue.push(group1[i]);
		d[group1[i].first][group1[i].second] = 1;
		visit[group1[i].first][group1[i].second] = 1;
		bool find = false;
		while (mqueue.size()>0) {
			int x = mqueue.front().first;
			int y = mqueue.front().second;
			mqueue.pop();
			for (int k = 0; k < 4; k++) {
				int X = x + dx[k];
				int Y = y + dy[k];
				if (X < 0 || X >= N || Y < 0 || Y >= M) continue;
				if (A[X][Y] == 0 && visit[X][Y] == 0) {
					visit[X][Y] = 1;
					d[X][Y] = d[x][y] + 1;
					mqueue.push({X, Y});
				} else if (A[X][Y] == 1) {
					min_d = min(min_d, d[x][y]);
					find = true;
				}
			} // end for
			if (find) break;
		} // end while	
	}
	cout << min_d << endl;
	return 0;
}

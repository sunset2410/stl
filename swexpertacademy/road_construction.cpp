#include <bits/stdc++.h>
using namespace std;

int N;//Map Size
int mmap[110][110];//Map information
int d[110][110];
int dx[4] = {1,-1,0, 0};
int dy[4] = {0,0,-1,1};

void Input_Data(){
	cin >> N;
	string temp;
	for (int i = 0; i < N; i++){
		cin >> temp;
		for (int j = 0; j < N; j++) {
			mmap[i][j] = temp[j] - '0';
			d[i][j] = 1e5;
		}
	}
}

struct cmp{
	bool operator()(pair<int,int> a, pair<int,int> b) const {
			if (d[a.first][a.second] == d[b.first][b.second]) {
				return a < b;
			} else {
				return d[a.first][a.second] > d[b.first][b.second];
			}
	}
};

int main(){
	int ans = -1;
	Input_Data();		//	Input function


	//	Write the code
	
	// cout << "--------test ----------";
	// cout << endl;
	// for (int i = 0; i < N; i++) {
	// 	for (int j = 0; j < N; j++) {
	// 		cout << mmap[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	
	
	d[0][0] = 0;
		
	// cout << "--------test2 ----------";
	// cout << endl;
	// for (int i = 0; i < N; i++) {
	// 	for (int j = 0; j < N; j++) {
	// 		cout << d[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }	
	
	priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> mqueue;
	mqueue.push({0,0});
	
	while (mqueue.size() > 0) {
		auto current = mqueue.top();
		int x = current.first;
		int y = current.second;
		mqueue.pop();
		
		for (int i = 0; i<4; i++) {
			int X = x + dx[i];
			int Y = y + dy[i];
			if (X < 0 || X >= N || Y < 0 || Y >= N) {
				continue;
			}
			
			if (d[X][Y] > d[x][y] + mmap[X][Y]) {
				d[X][Y] = d[x][y] + mmap[X][Y];
				mqueue.push({X,Y});
				//cout << "X,Y:" << X << "," << Y << " = " << d[X][Y] << endl;
			}
			
		}
		
	}
	
	// cout << "--------test3 ----------";
	// cout << endl;
	// for (int i = 0; i < N; i++) {
	// 	for (int j = 0; j < N; j++) {
	// 		cout << d[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }	

	ans = d[N-1][N-1];
	
	cout << ans << endl;	//	Output answer

	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int N, X;
pair<int,int> des;
vector<pair<int,int>> station;
bool check[10000 + 5]{};
int cnt[10000 + 5]{};

int main() {
    cin >> N >> X;
    cin >> des.first >> des.second;
    int t1, t2;
    station.push_back({0,0});
    for (int i = 0; i < N; i ++) {
        cin >> t1 >> t2;
        station.push_back({t1, t2});
    }
    station.push_back(des);
    N += 2;
    
    queue<int> mqueue;
    mqueue.push(0);
    check[0] = true;
    bool finish = false;
    int result = -1;
    while (mqueue.size() > 0) {
        int index = mqueue.front();
        pair<int,int> current = station[index];
        mqueue.pop();
        //cout << endl;
        //cout << "current " << current.first << " "  << current.second << endl;
        for (int i = 0; i < N; i ++) {
            if (station[i] == current || check[i] == true) continue; 
            
            if (abs(current.first - station[i].first) + abs(current.second - station[i].second) <= X) {
                //cout << "station[i] "<< station[i].first << " " << station[i].second << endl;
                mqueue.push(i);
                check[i] = true;
                cnt[i] = cnt[index] + 1;
                if (station[i] == des) {
                    result = cnt[i] - 1;
                    finish = true;
                    break;
                }
            }
        }
        if (finish) break;
    }
    
    cout << result << endl;
    return 0;
}

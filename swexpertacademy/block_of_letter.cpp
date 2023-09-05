#include <bits/stdc++.h>
using namespace std;

string s;
unordered_map<char, int> mmap;
unordered_set<char> mset;

int find_maximum_towers(const uint &start)
{
    //print for test
    //cout << start << " " << endl;
    
    if (start >= s.length()) return 0;

    int  result = 0; // so nhom tach dc

    //cout << "test2" << endl;

    for (uint i = 0; i < s.length(); ++i) {
        if (i < start) {
            continue;
        }

        //cout << "test3" << endl;

        /* calculate current number of 'A' and 'B' */
        auto it = mmap.find(s[i]);
        if (it == mmap.end()) {
            mmap.insert({s[i], 1});
        } else {
            it->second = it->second + 1;
        }
        int cnt_temp = it->second;
        //int cnt_temp = mmap.find(s[i])->second;

        //cout << "test4" << endl;
        
        /* ignore if number of 'A' is not the same as number of 'B' */
        bool check = true;
        
        for (auto it2 = mmap.begin(); it2 != mmap.end(); it2++) {
            if (it2->second != cnt_temp) {
                check = false;
                break;
            }
        }

        //cout << "test5" << endl;

        if (check == true && mmap.size() == mset.size()) {
            //result = max(result, 1 + find_maximum_towers(i + 1));
            result ++;
        }

        //cout << "test6" << endl;
         
    } // end for string s

    return result;
}

int main(int argc, char **argv)
{
    freopen("input.txt", "r", stdin);
    cin >> s;
    for (uint i = 0; i< s.length(); i++) {
        mset.insert(s[i]);
    }
    //cout << "test1" << endl;
    cout << find_maximum_towers(0) << endl;

    return 0;
}

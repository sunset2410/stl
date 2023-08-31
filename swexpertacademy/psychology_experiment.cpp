#include <bits/stdc++.h>
using namespace std;

int N;//The number of candidates
//int A[100000 + 10];//Temperament value
struct data {
	int value;
	int index;
};

data B[100000 + 10];

struct cmp {
	bool operator()(data pos1, data pos2){
		if(pos1.value == pos2.value) {
			return pos1.index < pos2.index;
		} else {
			return pos1.value < pos2.value;
		}
	}

};

void InputData(){
    cin >> N;
    for (int i = 0; i < N; i++) {
			cin >> B[i].value;
			B[i].index = i;
		}
		
}

int main(){
    InputData();//	Input function
	//	Create the code
	sort(B, B + N, cmp());
	
	// for (int i = 0; i< N; i ++) {
	// 	cout << B[i].value << "," << B[i].index << "   ";
	// }
	
	int p1 = 0;
	int p2 = N-1;
	
	pair<int,int> min_index = {B[p1].index, B[p2].index};
	int min_sum = abs(B[p1].value + B[p2].value);
	while (p1<p2) {
		if (B[p1].value + B[p2].value > 0) {
			p2--;
		} else {
			p1++;
		}
		// update min_sum and min_index;
		if ((abs(B[p1].value + B[p2].value) < min_sum) ||
				(abs(B[p1].value + B[p2].value) == min_sum &&
				 min(B[p1].index , B[p2].index) < min(min_index.first, min_index.second))) {
					min_sum = abs(B[p1].value + B[p2].value);
					min_index = {B[p1].index, B[p2].index};
		}
		
	}
		cout << min(min_index.first, min_index.second) << " "
			<< max(min_index.first, min_index.second) << endl;
    return 0;
}

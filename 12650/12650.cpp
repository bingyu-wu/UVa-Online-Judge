//12650 - Dangerous Dive
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N, R;
	while (cin >> N >> R){
		vector<int>returned(R);
		for (int i = 0; i < returned.size(); i++){
			cin >> returned[i];
		}
		if (N == R){
			cout << "*" << endl;
		}
		else{
			sort(returned.begin(), returned.end());
			int temp = 0;
			for (int went = 1; went <= N; went++){
				for (int i = 0; i < returned.size(); i++){
					if (went == returned[i]){
						temp = 1;
						break;
					}
					else{
						temp = 0;
					}
				}
				if (temp == 0){
					cout << went << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}
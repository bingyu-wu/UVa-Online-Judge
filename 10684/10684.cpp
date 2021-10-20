//10684 - The jackpot
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	while (cin >> N) {
		if (N == 0) {
			return 0;
		}
		else {
			vector<int>num(N);
			for (int i = 0; i < num.size(); i++) {
				cin >> num[i];
			}
			int count = 0, max = 0;
			for (int i = 0; i < num.size(); i++) {
				count += num[i];
				if (count > max) {
					max = count;
				}
				else if (count < 0) {
					count = 0;
				}
			}
			if (max > 0) {
				cout << "The maximum winning streak is " << max << "." << endl;
			}
			else {
				cout << "Losing streak." << endl;
			}
		}
	}
	return 0;
}
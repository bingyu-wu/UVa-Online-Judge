//299 - Train Swapping
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	while (cin >> N) {
		for (int cases = 1; cases <= N; cases++) {
			int L;
			cin >> L;
			vector<int>carriages(L);
			for (int i = 0; i < L; i++) {
				cin >> carriages[i];
			}
			int S = 0;
			for (int n1 = 0; n1 < L - 1; n1++) {
				for (int n2 = n1 + 1; n2 < L; n2++) {
					if (carriages[n1] > carriages[n2]) {
						swap(carriages[n1], carriages[n2]);
						S++;
					}
				}
			}
			cout << "Optimal train swapping takes " << S << " swaps." << endl;
		}
	}
	return 0;
}
//11063 - B2-Sequence
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int cases = 1, N;
	while (cin >> N) {
		vector<int>num(N);
		int temp = 1;
		for (int i = 0; i < N; i++) {
			cin >> num[i];
			if (i > 0 && num[i - 1] >= num[i]) {
				temp = 0;
			}
		}
		vector<int>sum(((N + 1) * N) / 2);
		int p = sum.size() - 1;
		for (int i1 = 0; i1 < N; i1++) {
			for (int i2 = i1; i2 < N; i2++) {
				sum[p] = num[i1] + num[i2];
				p--;
			}
		}
		sort(sum.begin(), sum.end());
		for (int i = 0; i < sum.size() - 1; i++) {
			if (sum[i] <= 0 || sum[i] == sum[i + 1]) {
				temp = 0;
				break;
			}
		}
		if (temp == 1) {
			cout << "Case #" << cases << ": It is a B2-Sequence." << endl << endl;
		}
		else {
			cout << "Case #" << cases << ": It is not a B2-Sequence." << endl << endl;
		}
		cases++;
	}
	return 0;
}
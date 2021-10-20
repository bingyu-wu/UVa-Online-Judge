//10038 - Jolly Jumpers
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		vector<int>num(n);
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}
		vector<int>diff(n - 1);
		for (int i = 0; i < n - 1; i++) {
			diff[i] = abs(num[i] - num[i + 1]);
		}
		sort(diff.begin(), diff.end());
		int count = 0;
		for (int i = 0; i < n - 1; i++) {
			if (i < n - 2 && diff[i] == diff[i + 1]) {
				count++;
				break;
			}
			if (diff[i] > n - 1 || diff[i] == 0) {
				count++;
				break;
			}
		}
		if (count == 1) {
			cout << "Not jolly" << endl;
		}
		else {
			cout << "Jolly" << endl;
		}
	}
	return 0;
}
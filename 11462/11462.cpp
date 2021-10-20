//11462 - Age Sort
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			return 0;
		}
		else {
			vector<int>ages(n);
			for (int i = 0; i < n; i++) {
				cin >> ages[i];
			}
			sort(ages.begin(), ages.end());
			for (int i = 0; i < n; i++) {
				if (i == n - 1) {
					cout << ages[i] << endl;
				}
				else {
					cout << ages[i] << " ";
				}
			}
		}
	}
	return 0;
}
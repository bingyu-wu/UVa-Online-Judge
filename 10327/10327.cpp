//10327 - Flip Sort
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	while (cin >> N) {
		vector<int>num(N);
		for (int i = 0; i < num.size(); i++) {
			cin >> num[i];
		}
		int M = 0;
		for (int i1 = num.size() - 1; i1 > 0; i1--) {
			for (int i2 = 0; i2 < i1; i2++) {
				if (num[i2] > num[i2 + 1]) {
					swap(num[i2], num[i2 + 1]);
					M++;
				}
			}
		}
		cout << "Minimum exchange operations : " << M << endl;
	}
	return 0;
}
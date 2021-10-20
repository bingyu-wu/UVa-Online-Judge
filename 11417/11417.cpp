//11417 - GCD
#include <iostream>

using namespace std;

int GCD(int n1, int n2) {
	if (n2 == 0) {
		return n1;
	}
	return GCD(n2, n1 % n2);
}

int main() {
	int N;
	while (cin >> N) {
		if (N == 0) {
			return 0;
		}
		else {
			int G = 0;
			for (int i = 1; i < N; i++) {
				for (int j = i + 1; j <= N; j++) {
					G += GCD(i, j);
				}
			}
			cout << G << endl;
		}		
	}
	return 0;
}
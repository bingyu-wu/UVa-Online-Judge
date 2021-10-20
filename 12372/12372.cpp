//12372 - Packing for Holiday
#include <iostream>

using namespace std;

int main() {
	int T;
	while (cin >> T) {
		for (int c = 1; c <= T; c++) {
			int L, W, H;
			cin >> L >> W >> H;
			if (L <= 20 && W <= 20 && H <= 20) {
				cout << "Case " << c << ": " << "good" << endl;
			}
			else {
				cout << "Case " << c << ": " << "bad" << endl;
			}
		}
	}
	return 0;
}
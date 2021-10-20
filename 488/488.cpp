//488 - Triangle Wave
#include <iostream>

using namespace std;

int main() {
	int cases;
	while (cin >> cases) {
		for (int c = 1; c <= cases; c++) {
			int Amplitude;
			cin >> Amplitude;
			int Frequency;
			cin >> Frequency;
			for (int f = 1; f <= Frequency; f++) {
				for (int a = 1; a <= Amplitude; a++) {
					for (int i = 1; i <= a; i++) {
						cout << a;
					}
					cout << endl;
				}
				for (int a = Amplitude - 1; a >= 1; a--) {
					for (int i = 1; i <= a; i++) {
						cout << a;
					}
					cout << endl;
				}
				if (f == Frequency && c == cases) {
					break;
				}
				cout << endl;
			}
		}
	}
	return 0;
}
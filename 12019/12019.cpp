//12019 - Doom's Day Algorithm
#include <iostream>

using namespace std;

int main() {
	int cases;
	while (cin >> cases) {
		for (int c = 1; c <= cases; c++) {
			int M, D;
			cin >> M >> D;
			int mounth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
			if (M != 1) {
				for (int i = 0; i < M - 1; i++) {
					D += mounth[i];
				}
			}
			if ((D - 1) % 7 == 0) {
				cout << "Saturday" << endl;
			}
			else if ((D - 2) % 7 == 0) {
				cout << "Sunday" << endl;
			}
			else if ((D - 3) % 7 == 0) {
				cout << "Monday" << endl;
			}
			else if ((D - 4) % 7 == 0) {
				cout << "Tuesday" << endl;
			}
			else if ((D - 5) % 7 == 0) {
				cout << "Wednesday" << endl;
			}
			else if ((D - 6) % 7 == 0) {
				cout << "Thursday" << endl;
			}
			else if ((D - 7) % 7 == 0) {
				cout << "Friday" << endl;
			}
		}
	}
	return 0;
}
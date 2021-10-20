//1585 - Score
#include <iostream>
#include <string>

using namespace std;

int main() {
	int T;
	while (cin >> T) {
		for (int c = 1; c <= T; c++) {
			string OX;
			cin >> OX;
			int score = 0, point = 1;
			for (int i = 0; i < OX.length(); i++) {
				if (OX[i] == 'O') {
					score += point;
					point++;
				}
				else if (OX[i] == 'X') {
					point = 1;
				}
			}
			cout << score << endl;
		}
	}
	return 0;
}
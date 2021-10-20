//12626 - I Love Pizza
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N;
	while (cin >> N) {
		for (int c = 1; c <= N; c++) {
			string letter;
			cin >> letter;
			int MARGARITA[6] = {};
			for (int i = 0; i < letter.length(); i++) {
				if (letter[i] == 'M') {
					MARGARITA[0]++;
				}
				else if (letter[i] == 'A') {
					MARGARITA[1]++;
				}
				else if (letter[i] == 'R') {
					MARGARITA[2]++;
				}
				else if (letter[i] == 'G') {
					MARGARITA[3]++;
				}
				else if (letter[i] == 'I') {
					MARGARITA[4]++;
				}
				else if (letter[i] == 'T') {
					MARGARITA[5]++;
				}
			}
			MARGARITA[1] /= 3;
			MARGARITA[2] /= 2;
			sort(MARGARITA, MARGARITA + 6);
			cout << MARGARITA[0] << endl;
		}
	}
	return 0;
}
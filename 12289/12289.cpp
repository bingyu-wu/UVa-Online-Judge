//12289 - One-Two-Three
#include <iostream>
#include <string>

using namespace std;

int temp(string s1, string s2) {
	int diff = 0;
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) {
			diff++;
		}
	}
	return diff;
}

int main() {
	int cases;
	while (cin >> cases) {
		for (int c = 1; c <= cases; c++) {
			string num;
			cin >> num;
			string correct;
			int wrong;
			if (num.length() == 3) {
				correct = "one";
				for (int i = 1; i <= 2; i++) {
					wrong = temp(num, correct);
					if (wrong <= 1) {
						cout << i << endl;
						break;
					}
					correct = "two";
				}
			}
			else if (num.length() == 5) {
				correct = "three";
				wrong = temp(num, correct);
				if (wrong <= 1) {
					cout << 3 << endl;
				}
			}			
		}
	}
	return 0;
}
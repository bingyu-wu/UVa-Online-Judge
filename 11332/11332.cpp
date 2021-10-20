//11332 - Summing Digits
#include <iostream>
#include <string>

using namespace std;

int main() {
	string n;
	while (cin >> n) {
		if (n == "0") {
			return 0;
		}
		else {
			while (n.length() > 1) {
				int sum = 0;
				for (int i = 0; i < n.length(); i++) {
					sum += (n[i] - '0');
				}
				n = to_string(sum);
			}
			cout << n << endl;
		}
	}
	return 0;
}
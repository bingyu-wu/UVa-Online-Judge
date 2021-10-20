//10931 - Parity
#include <iostream>
#include <string>

using namespace std;

int main() {
	int I;
	while (cin >> I) {
		if (I == 0) {
			return 0;
		}
		else {
			string B;
			int P = 0;
			while (I > 0) {
				if (I % 2 == 1) {
					P++;
				}
				B += to_string(I % 2);
				I /= 2;
			}
			cout << "The parity of ";
			for (int i = B.length() - 1; i >= 0; i--) {
				cout << B[i];
			}
			cout << " is " << P << " (mod 2)." << endl;
		}
	}
	return 0;
}
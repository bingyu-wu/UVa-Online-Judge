//10035 - Primary Arithmetic
#include <iostream>
#include <string>

using namespace std;

int main() {
	string num1, num2;
	while (cin >> num1 >> num2) {
		if (num1 == "0" && num2 == "0") {
			return 0;
		}
		else {
			int i1 = num1.length() - 1, i2 = num2.length() - 1, carry = 0, count = 0;
			while (i1 >= 0 && i2 >= 0) {
				if ((num1[i1] - '0') + (num2[i2] - '0') + carry >= 10) {
					carry = 1;
					count++;
				}
				else {
					carry = 0;
				}
				i1--;
				i2--;
			}
			if (num1.length() > num2.length()) {
				for (int i = i1; i >= 0; i--) {
					if ((num1[i] - '0') + carry >= 10) {
						carry = 1;
						count++;
					}
					else {
						break;
					}
				}
			}
			else if (num2.length() > num1.length()) {
				for (int i = i2; i >= 0; i--) {
					if ((num2[i] - '0') + carry >= 10) {
						carry = 1;
						count++;
					}
					else {
						break;
					}
				}
			}
			if (count == 0) {
				cout << "No carry operation." << endl;
			}
			else if (count == 1) {
				cout << count << " carry operation." << endl;
			}
			else {
				cout << count << " carry operations." << endl;
			}
		}
	}
	return 0;
}
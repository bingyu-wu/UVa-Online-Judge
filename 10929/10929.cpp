//10929 - You can say 11
#include <iostream>
using namespace std;
int main() {
	string num;
	while (cin >> num) {
		if (num == "0") {
			return 0;
		}
		else {
			int odd = 0, even = 0;
			for (int i = num.length() - 1; i >= 0; i -= 2) {
				odd += (num[i] - '0');
			}
			for (int i = num.length() - 2; i >= 0; i -= 2) {
				even += (num[i] - '0');
			}
			if ((odd - even) % 11 == 0) {
				cout << num << " is a multiple of 11." << endl;
			}
			else {
				cout << num << " is not a multiple of 11." << endl;
			}
		}
	}
	return 0;
}
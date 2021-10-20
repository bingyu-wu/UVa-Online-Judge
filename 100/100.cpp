//100 - The 3n + 1 problem
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int i, j;
	while (cin >> i >> j) {
		int maximum_length = 0;
		for (int n = min(i, j); n <= max(i, j); n++) {
			int num = n;
			int count = 1;
			while (num > 1) {
				if (num % 2 == 1) {
					num = 3 * num + 1;
					count++;
				}
				else {
					num /= 2;
					count++;
				}
			}
			if (count > maximum_length) {
				maximum_length = count;
			}
		}
		cout << i << " " << j << " " << maximum_length << endl;
	}
	return 0;
}
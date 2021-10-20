//11461 - Square Numbers
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) {
			return 0;
		}
		else {
			int counter = 0;
			for (int i = a; i <= b; i++) {
				float f = sqrt(i);
				if (f == sqrt(i)) {
					counter++;
				}
			}
			cout << counter << endl;
		}
	}
	return 0;
}
//10812 - Beat the Spread!
#include <iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		for (int cases = 1; cases <= n; cases++) {
			int s, d;
			cin >> s >> d;
			if ((s + d) % 2 == 1 || s < d) {
				cout << "impossible" << endl;
			}
			else {
				int a, b;
				a = (s + d) / 2;
				b = s - a;
				cout << a << " " << b << endl;
			}
		}
	}
	return 0;
}
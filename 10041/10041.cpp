//10041 - Vito's Family
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
	int cases;
	while (cin >> cases) {
		for (int c = 1; c <= cases; c++) {
			int r;
			cin >> r;
			vector<int>s(r);
			for (int i = 0; i < r; i++) {
				cin >> s[i];
			}
			sort(s.begin(), s.end());
			int Vito;
			if (r % 2 != 0) {
				Vito = s[(r + 1) / 2 - 1];
			}
			else {
				Vito = (s[r / 2 - 1] + s[r / 2]) / 2;
			}
			int distance = 0;
			for (int i = 0; i < r; i++) {
				distance += abs(Vito - s[i]);
			}
			cout << distance << endl;
		}
	}
	return 0;
}
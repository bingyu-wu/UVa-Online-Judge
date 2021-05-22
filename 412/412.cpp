//412 - Pi
#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;
int GCD(int num1, int num2) {
	if (num2 == 0) {
		return num1;
	}	
	return GCD(num2, num1 % num2);
}
int main() {
	int N;
	while (cin >> N) {
		if (N == 0) {
			return 0;
		}
		else {
			vector<int>num(N);
			for (int i = 0; i < N; i++) {
				cin >> num[i];
			}
			double pair = 0, Pi2 = 0;
			for (int i1 = 0; i1 < N - 1; i1++) {
				for (int i2 = i1 + 1; i2 < N; i2++) {
					pair++;
					if (GCD(num[i1], num[i2]) == 1) {
						Pi2++;
					}
				}
			}
			if (Pi2 == 0) {
				cout << "No estimate for this data set." << endl;
			}
			else {
				cout << setprecision(6) << fixed << sqrt(6 / (Pi2 / pair)) << endl;
			}
		}
	}
	return 0;
}
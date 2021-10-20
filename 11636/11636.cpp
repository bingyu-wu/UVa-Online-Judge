//11636 - Hello World!
#include <iostream>

using namespace std;

int main() {
	int N, X = 1;
	while (cin >> N) {
		if (N < 0) {
			return 0;
		}
		else {
			int total = 1, Y = 0;
			while (total < N) {
				total *= 2;
				Y++;
			}
			cout << "Case " << X << ": " << Y << endl;
		}
		X++;
	}
	return 0;
}
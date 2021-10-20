//11321 - Sort! Sort!! and Sort!!!
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

struct Data {
	int num;
	int mod;
	int odd_even;
};

bool Sort(Data n1, Data n2) {
	if (n1.mod != n2.mod) {
		return n1.mod < n2.mod;
	}
	else {
		if (n1.odd_even == 1 && n2.odd_even == 0) {
			return true;
		}
		else if (n1.odd_even == 0 && n2.odd_even == 1) {
			return false;
		}
		else if (n1.odd_even == 1 && n2.odd_even == 1) {
			return n1.num > n2.num;
		}
		else if (n1.odd_even == 0 && n2.odd_even == 0) {
			return n1.num < n2.num;
		}
	}
}

int main() {
	int N, M;
	while (cin >> N >> M) {
		cout << N << " " << M << endl;
		if (N == 0 && M == 0) {	
			return 0;
		}
		else {
			vector<Data>number(N);
			for (int i = 0; i < number.size(); i++) {
				cin >> number[i].num;
				number[i].mod = number[i].num % M;
				number[i].odd_even = abs(number[i].num % 2);
			}
			sort(number.begin(), number.end(), Sort);
			for (int i = 0; i < number.size(); i++) {
				cout << number[i].num << endl;
			}
		}
	}
	return 0;
}
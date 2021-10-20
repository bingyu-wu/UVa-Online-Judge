//10101 - Bangla Numbers
#include <iostream>
#include <iomanip>

using namespace std;

void bangla(long long n) {
	if (n / 10000000 != 0) {
		bangla(n / 10000000);
		cout << " kuti";
		n %= 10000000;
	}
	if (n / 100000 != 0) {
		bangla(n / 100000);
		cout << " lakh";
		n %= 100000;
	}
	if (n / 1000 != 0) {
		bangla(n / 1000);
		cout << " hajar";
		n %= 1000;
	}
	if (n / 100 != 0) {
		bangla(n / 100);
		cout << " shata";
		n %= 100;
	}
	if (n != 0) {
		cout << " " << n;
	}
}

int main() {
	int cases = 1;
	long long int num;
	while (cin >> num) {
		cout << setw(4) << right << cases << ".";
		if (num == 0) {
			cout << " 0";
		}
		else {
			bangla(num);
		}
		cout << endl;
		cases++;
	}
	return 0;
}
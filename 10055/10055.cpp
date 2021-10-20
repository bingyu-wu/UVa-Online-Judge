//10055 - Hashmat the Brave Warrior
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	long long int Hashmat, opponent;
	while (cin >> Hashmat >> opponent) {
		cout << abs(Hashmat - opponent) << endl;
	}
	return 0;
}
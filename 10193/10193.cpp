//10193 - All You Need Is Love
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int decimal(string s){
	int D = 0;
	for (int i = 0; i<s.length(); i++){
		D += (s[i] - '0')*pow(2, s.length() - 1 - i);
	}
	return D;
}

int GCD(int n1, int n2){
	if (n2 == 0){
		return n1;
	}
	return GCD(n2, n1%n2);
}

int main(){
	int N;
	while (cin >> N){
		for (int c = 1; c <= N; c++){
			string S1;
			cin >> S1;
			string S2;
			cin >> S2;
			if (GCD(decimal(S1), decimal(S2)) == 1){
				cout << "Pair #" << c << ": " << "Love is not all you need!" << endl;
			}
			else{
				cout << "Pair #" << c << ": " << "All you need is love!" << endl;
			}
		}
	}
	return 0;
}
//10019 - Funny Encryption Method
#include <iostream>
#include <math.h>
using namespace std;
int base(string m, int b){
	int num, p = 0;
	for (int i = m.length() - 1; i >= 0; i--){
		num += (m[i] - '0')*pow(b, p);
		p++;
	}
	return num;
}
int one(int binary, int bx){
	while (binary>0){
		if (binary % 2 == 1){
			bx++;
		}
		binary /= 2;
	}
	return bx;
}
int main(){
	int N;
	while (cin >> N){
		for (int c = 1; c <= N; c++){
			string M;
			cin >> M;
			int b1 = 0;
			b1 = one(base(M, 10), b1);
			int b2 = 0;
			b2 = one(base(M, 16), b2);
			cout << b1 << " " << b2 << endl;
		}
	}
	return 0;
}
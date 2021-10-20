//10783 - Odd Sum
#include <iostream>
using namespace std;
int main(){
	int T;
	while (cin >> T){
		for (int c = 1; c <= T; c++){
			int a;
			cin >> a;
			int b;
			cin >> b;
			int total = 0;
			for (int i = a; i <= b; i++){
				if (i % 2 != 0){
					total += i;
				}
			}
			cout << "Case " << c << ": " << total << endl;
		}
	}
	return 0;
}
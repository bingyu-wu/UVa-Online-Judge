//10079 - Pizza Cutting
#include <iostream>

using namespace std;

int main(){
	long long int N;
	while (cin >> N){
		if (N < 0){
			return 0;
		}
		else{
			cout << 1 + ((N + 1)*N / 2) << endl;
		}
	}
	return 0;
}
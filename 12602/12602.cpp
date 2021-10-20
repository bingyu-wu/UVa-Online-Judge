//12602 - Nice Licence Plates
#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int N;
	while (cin >> N){
		for (int c = 1; c <= N; c++){
			char licence_plate[4];
			int D;
			for (int i = 0; i < 4; i++){
				cin >> licence_plate[i];
			}
			cin >> D;
			int L = 0;
			for (int i = 0; i < 3; i++){
				L += (licence_plate[i] - 'A')*pow(26, 2 - i);
			}
			if (abs(L - D) <= 100){
				cout << "nice" << endl;
			}
			else{
				cout << "not nice" << endl;
			}
		}
	}
	return 0;
}
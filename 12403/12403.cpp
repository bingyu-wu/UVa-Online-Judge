//12403 - Save Setu
#include <iostream>
#include <string>

using namespace std;

int main(){
	int T;
	while (cin >> T){
		int total = 0;
		for (int cases = 1; cases <= T; cases++){
			string operation;
			cin >> operation;
			if (operation == "donate"){
				int donate;
				cin >> donate;
				total += donate;
			}
			else if (operation == "report"){
				cout << total << endl;
			}
		}
	}
	return 0;
}
//272 - TEX Quotes
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int compare = 0;
	while (getline(cin, str)) {		
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '"') {
				if (compare == 0) {
					compare++;
					cout << "``";
				}
				else {
					compare = 0;
					cout << "''";
				}
			}
			else {
				cout << str[i];
			}
		}
		cout << endl;
	}
	return 0;
}
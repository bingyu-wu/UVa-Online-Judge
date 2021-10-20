//458 - The Decoder
#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		for (int i = 0; i < str.length(); i++){
			int n = str[i];
			char c = n - 7;
			if (i < str.length() - 1){
				cout << c;
			}
			else{
				cout << c << endl;
			}
		}
	}
	return 0;
}
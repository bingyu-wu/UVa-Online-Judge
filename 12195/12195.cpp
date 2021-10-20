//12195 - Jingle Composing
#include <iostream>
#include <string>

using namespace std;

int main(){
	string measure;
	while (cin >> measure){
		if (measure == "*"){
			return 0;
		}
		else{
			float duration = 0; 
			int count = 0;
			for (int i = 0; i < measure.length(); i++){
				if (measure[i] == '/'){
					if (duration / 64 == 1){
						count++;
					}
					duration = 0;
				}
				else if (measure[i] == 'W'){
					duration += 64;
				}
				else if (measure[i] == 'H'){
					duration += 32;
				}
				else if (measure[i] == 'Q'){
					duration += 16;
				}
				else if (measure[i] == 'E'){
					duration += 8;
				}
				else if (measure[i] == 'S'){
					duration += 4;
				}
				else if (measure[i] == 'T'){
					duration += 2;
				}
				else if (measure[i] == 'X'){
					duration += 1;
				}
			}
			cout << count << endl;
		}
	}
	return 0;
}
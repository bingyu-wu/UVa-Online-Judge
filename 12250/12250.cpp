//12250 - Language Detection
#include <iostream>
#include <string>

using namespace std;

int main() {
	string S;
	int cases = 1;
	while (cin >> S) {
		if (S == "#") {
			return 0;
		}
		else {
			if (S == "HELLO") {
				cout << "Case " << cases << ": ENGLISH" << endl;
			}
			else if (S == "HOLA") {
				cout << "Case " << cases << ": SPANISH" << endl;
			}
			else if (S == "HALLO") {
				cout << "Case " << cases << ": GERMAN" << endl;
			}
			else if (S == "BONJOUR") {
				cout << "Case " << cases << ": FRENCH" << endl;
			}
			else if (S == "CIAO") {
				cout << "Case " << cases << ": ITALIAN" << endl;
			}
			else if (S == "ZDRAVSTVUJTE") {
				cout << "Case " << cases << ": RUSSIAN" << endl;
			}
			else {
				cout << "Case " << cases << ": UNKNOWN" << endl;
			}
			cases++;
		}
	}
	return 0;
}
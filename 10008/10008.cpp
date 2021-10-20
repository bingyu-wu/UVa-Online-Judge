//10008 - What's Cryptanalysis?
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Data {
	char character = '0';
	int count = 0;
};

bool Sort(Data num1, Data num2) {
	if (num1.count != num2.count) {
		return num1.count > num2.count;
	}
	else {
		return num1.character < num2.character;
	}
}

int main() {
	int n;
	while (cin >> n) {
		Data counter[26];
		for (int i = 0; i < 26; i++) {
			counter[i].character = 'A' + i;
		}
		cin.ignore();
		for (int c = 1; c <= n; c++) {
			string text;
			getline(cin, text);
			for (int i = 0; i < text.length(); i++) {
				if (97 <= text[i] && text[i] <= 122) {
					text[i] -= 32;
				}
				for (int d = 0; d < 26; d++) {
					if (text[i] == counter[d].character) {
						counter[d].count++;
					}
				}
			}
		}
		sort(counter, counter + 26, Sort);
		for (int i = 0; i < 26; i++) {
			if (counter[i].count != 0) {
				cout << counter[i].character << " " << counter[i].count << endl;
			}		
		}
	}
	return 0;
}
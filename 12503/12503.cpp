//12503 - Robot Instructions
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int T;
	while (cin >> T) {
		for (int c = 1; c <= T; c++) {
			int n;
			cin >> n;
			vector<int>point(n);
			int position = 0;
			for (int t = 0; t < point.size(); t++) {
				string instruction;
				cin >> instruction;
				if (instruction == "LEFT") {
					position--;
					point[t] = -1;
				}
				else if (instruction == "RIGHT") {
					position++;
					point[t] = 1;
				}
				else if (instruction == "SAME") {
					cin >> instruction;
					int i;
					cin >> i;
					point[t] = point[i - 1];
					position += point[t];
				}	
			}
			cout << position << endl;
		}
	}
	return 0;
}
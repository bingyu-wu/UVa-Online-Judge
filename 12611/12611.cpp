//12611 - Beautiful Flag
#include <iostream>

using namespace std;

struct xy{
	int x, y;
};

int main(){
	int T;
	while (cin >> T){
		for (int c = 1; c <= T; c++){
			int R;
			cin >> R;
			int length = R * 100 / 20;
			int width = length * 60 / 100;
			xy upper_left, upper_right, lower_right, lower_left;
			upper_left.x = -length * 45 / 100;
			upper_left.y = width / 2;
			upper_right.x = length * 55 / 100;
			upper_right.y = width / 2;
			lower_right.x = length * 55 / 100;
			lower_right.y = -width / 2;
			lower_left.x = -length * 45 / 100;
			lower_left.y = -width / 2;
			cout << "Case " << c << ":" << endl;
			cout << upper_left.x << " " << upper_left.y << endl;
			cout << upper_right.x << " " << upper_right.y << endl;
			cout << lower_right.x << " " << lower_right.y << endl;
			cout << lower_left.x << " " << lower_left.y << endl;
		}
	}
	return 0;
}
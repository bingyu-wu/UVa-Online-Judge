// 12959 - Strategy Game
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct data {
    int player, point;
};

bool Sort(data num1, data num2) {
    if (num1.point < num2.point) {
        return false;
    } else if (num1.point == num2.point && num1.player < num2.player) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int J, R;
    while (cin >> J >> R) {
        if (J == 0 && R == 0) {
            break;
        }
        vector<int> game(J * R);
        for (int i = 0; i < game.size(); i++) {
            cin >> game[i];
        }
        vector<data> sum(J);
        for (int i = 0; i < sum.size(); i++) {
            sum[i].player = i + 1;
            sum[i].point = 0;
            for (int j = i; j < game.size(); j += J) {
                sum[i].point += game[j];
            }
        }
        sort(sum.begin(), sum.end(), Sort);
        cout << sum[0].player << endl;
    }
    return 0;
}
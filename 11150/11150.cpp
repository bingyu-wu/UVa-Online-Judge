// 11150 - Cola
#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int empty = N;
        int total = N;
        while (empty >= 3) {
            total += (empty / 3);
            empty = (empty / 3) + (empty % 3);
        }
        if (empty == 2) {
            total++;
        }
        cout << total << endl;
    }
    return 0;
}
// 12578 - 10:6:2
#include <math.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int T;
    while (cin >> T) {
        for (int cases = 1; cases <= T; cases++) {
            double L;
            cin >> L;
            double W = L * 0.6;
            double r = L / 5;
            double flagArea = L * W;
            double redArea = pow(r, 2) * acos(-1);
            double greenArea = flagArea - redArea;
            cout << setprecision(2) << fixed << redArea << " " << greenArea << endl;
        }
    }
    return 0;
}
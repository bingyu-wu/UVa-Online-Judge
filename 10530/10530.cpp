// 10530 - Guessing Game
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int lower_bound = 1, higher_bound = 10;
    int guess;
    while (cin >> guess) {
        if (guess == 0) {
            break;
        }
        cin.ignore();
        string response;
        getline(cin, response);
        if (response == "too high") {
            higher_bound = min(higher_bound, guess - 1);
        } else if (response == "too low") {
            lower_bound = max(lower_bound, guess + 1);
        } else if (response == "right on") {
            if (lower_bound <= guess && guess <= higher_bound) {
                cout << "Stan may be honest" << endl;
            } else {
                cout << "Stan is dishonest" << endl;
            }
            lower_bound = 1;
            higher_bound = 10;
        }
    }
    return 0;
}
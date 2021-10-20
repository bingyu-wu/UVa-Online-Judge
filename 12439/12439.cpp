//12439 - February 29
#include <iostream>
#include <string>

using namespace std;

int main(){
	int T;
	while (cin >> T){
		for (int c = 1; c <= T; c++){
			string month1, month2, comma;
			int date1, date2, year1, year2;
			cin >> month1 >> date1 >> comma >> year1;
			cin >> month2 >> date2 >> comma >> year2;
			if (month1 == "January" || month1 == "February"){
				year1--;
			}
			if (month2 == "January" || (month2 == "February" && date2 <= 28)){
				year2--;
			}
			cout << "Case " << c << ": " << (year2 / 4 - year2 / 100 + year2 / 400) - (year1 / 4 - year1 / 100 + year1 / 400) << endl;
		}
	}
	return 0;
}
//10921 - Find the Telephone
#include <iostream>
#include <string>

using namespace std;

int main(){
	string phone;
	while (cin >> phone){
		for (int i = 0; i<phone.length(); i++){
			if (phone[i] == 'A' || phone[i] == 'B' || phone[i] == 'C'){
				phone[i] = '2';
			}
			else if (phone[i] == 'D' || phone[i] == 'E' || phone[i] == 'F'){
				phone[i] = '3';
			}
			else if (phone[i] == 'G' || phone[i] == 'H' || phone[i] == 'I'){
				phone[i] = '4';
			}
			else if (phone[i] == 'J' || phone[i] == 'K' || phone[i] == 'L'){
				phone[i] = '5';
			}
			else if (phone[i] == 'M' || phone[i] == 'N' || phone[i] == 'O'){
				phone[i] = '6';
			}
			else if (phone[i] == 'P' || phone[i] == 'Q' || phone[i] == 'R' || phone[i] == 'S'){
				phone[i] = '7';
			}
			else if (phone[i] == 'T' || phone[i] == 'U' || phone[i] == 'V'){
				phone[i] = '8';
			}
			else if (phone[i] == 'W' || phone[i] == 'X' || phone[i] == 'Y' || phone[i] == 'Z'){
				phone[i] = '9';
			}
		}
		cout << phone << endl;
	}
	return 0;
}
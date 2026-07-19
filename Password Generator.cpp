#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int positivenumread() {
	int num;
	do { cin >> num; } while (num < 0);
	return num;
}
void askingHeader() {
	cout << "what kind a password u want?\n1:mixed(4 multiples, 1 input= 4 digits output)\n2:capital letter\n3:small letter \n4:number \n5:special num\nchoose:\t";
}


char SpecialCharacter(int from,int to)
{
int x = rand()%(to - from + 1) + from;
	return char(x);
	


}
char SmallCharacter(int from, int to)
{
	int x = rand() % (to - from + 1) + from;
	return char(x);



}
char CapitalCharacter(int from, int to)
{
	int x = rand() % (to - from + 1) + from;
	return char(x);



}
int NUM(int from, int to)
{
	int x = rand() % (to - from + 1) + from;
	return x;



}
void choice(int number) {
	int entry=0;
	if (number == 1) {
		cout << "How Many 4Digits group Your Want it";

		cin >> entry;
		for (entry;entry >= 1;entry--) {
			cout << SpecialCharacter(33, 47);
			cout << SmallCharacter(97, 122);
			cout << CapitalCharacter(65, 90);
			cout << NUM(1, 9);
		}

	}

		else if (number == 2) {
			entry = 0;
			cout << "How Many Digits Do You Want ?";
			cin >> entry;
			for (entry;entry >= 1;entry--) {
				cout << CapitalCharacter(65, 90);
			}
		}
		else if (number == 3) {
		entry = 0;
		cout << "How Many Digits Do U Want ?";
		cin >> entry;
		for (entry;entry >= 1;entry--) {
			cout << SmallCharacter(97, 122);
		}
	}
		else if (number == 4) {
		entry = 0;
		cout << "How Many Digits Do U Want ?";
		cin >> entry;
		for (entry;entry >= 1;entry--) {
			cout << NUM(1, 9);;
		}
	}
		else if (number == 5) {
		entry = 0;
		cout << "How Many Digits Do U Want ?";
		cin >> entry;
		for (entry;entry >= 1;entry--) {
			cout << SpecialCharacter(33, 47);
		}
	}
	}

int main() {
	srand((unsigned)time(NULL));
	askingHeader();
	choice(positivenumread());
}
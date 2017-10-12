/*
Grace Walzel - 10/5/17 P3
Program Problem 3
Create a project assuming that a completely trusthrowrthy and perfect user comes along and will enter a 3 digit number into your program as you ask for it. If the first digit of the first number is larger than the second and the second is larger than the first print out descending, similarly if the third is larger than the second and the second is larger than the third print out ascending, if neither potion is true print out neither.
*/

//Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //gives access to _kbhit() and _getch() for pause()

//namespaces
using namespace std; //*

					 //functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// main
void main() {
	int i = 0; // define loop number
	while (i < 30) {
		int someThreeDigitNumber;
		cout << "Enter a three digit number : ";
		cin >> someThreeDigitNumber;
		int A, B, C;

		A = someThreeDigitNumber / 100; //First digit

		B = (someThreeDigitNumber / 10) % 10; //Second digit

		C = someThreeDigitNumber % 10; //Third digit

		if (A < B && B < C) { // check to see if ascending

			cout << someThreeDigitNumber << " is ascending" << endl;
		}
		else if (A > B && B > C) { // check to see if descending

			cout << someThreeDigitNumber << " is descending" << endl;
		}
		else { //check to see if neither, A=B=C is only one classification of numbers that can be considered niether.

			cout << someThreeDigitNumber << " is neither ascending nor descending" << endl;
		}
		i++;
	}
	pause(); // pauses to see the displayed text
}

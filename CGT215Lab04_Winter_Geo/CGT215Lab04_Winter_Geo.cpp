// CGT215Lab04_Winter_Geo.cpp 
// Geo Winter
// September 14, 2023

#include <iostream>
using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "\nPlease Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	float factorial;

	cout << "\n[Factorial]";

	int fact_check = 0;
	do {
		cout << "\nPlease enter a number: ";
		cin >> factorial;

		if (factorial <= 0) { // checks to make sure the number is greater than zero
			cout << "You need a number higher than 0!" << endl;
		}
		else if (factorial - (int)factorial == 0.0 && factorial >= 0) {

			double factorial_final = 1;
			cout << factorial << "! = ";
			for (int i = 1; i <= factorial; i++) {
				factorial_final *= i;
				if (i < factorial) {
					cout << i << " * ";
				}
				else {
					cout << i;
				}
			}
			cout << " = " << factorial_final << endl << endl;
			fact_check = 1;
		}
		else { // rounds number to int if float is entered
			int round_factorial = (int)factorial;
			cout << "Your number wasn't whole, it was rounded to: " << round_factorial << endl;

			double factorial_final = 1;
			cout << round_factorial << "! = ";
			for (int i = 1; i <= round_factorial; i++) {
				factorial_final *= i;
				if (i < round_factorial) {
					cout << i << " * ";
				}
				else {
					cout << i;
				}
			}
			cout << " = " << factorial_final << endl << endl;
			fact_check = 1;
		}
	} while (fact_check == 0);
}
void arithmetic() {
	int start_num;
	int iterate_num;
	int elements_num;

	cout << "\n[Arithmetic]";
	cout << "\nPlease enter a starting number: ";
	cin >> start_num;
	cout << "Please enter a number to iterate by: ";
	cin >> iterate_num;

	int num_correct = 0; // check to make sure elements aren't 0 or less
	do {
		cout << "How many elements would you like to use: ";
		cin >> elements_num;

		if (elements_num <= 0) {
			cout << "Sorry you must enter a number greater than zero." << endl;
		}
		else {
			num_correct = 1;
		}
	} while (num_correct == 0);

	int k = 1;
	int placeholder = start_num;
	int total = placeholder;

	cout << start_num << " + ";
	for (int i = start_num; k < elements_num; i + iterate_num) {
		placeholder = placeholder + iterate_num;
		total = total + placeholder;
		if (k + 1 < elements_num) {
			cout << placeholder << " + ";
		}
		else {
			cout << placeholder << " = " << total << endl << endl;
		}
		k++;
	}
}
void geometric() {
	int start_num;
	int iterate_num;
	int elements_num;

	cout << "\n[Geometric]";
	cout << "\nPlease enter a starting number: ";
	cin >> start_num;
	cout << "Please enter a number to multiply by: ";
	cin >> iterate_num;

	int num_correct = 0; // check to make sure elements aren't 0 or less
	do {
		cout << "How many elements would you like to use: ";
		cin >> elements_num;

		if (elements_num <= 0) {
			cout << "Sorry you must enter a number greater than zero." << endl;
		}
		else {
			num_correct = 1;
		}
	} while (num_correct == 0);

	int k = 1;
	int placeholder = start_num;
	int total = placeholder;

	cout << start_num << " * ";
	for (int i = start_num; k < elements_num; i + iterate_num) {
		placeholder = placeholder * iterate_num;
		total = total + placeholder;
		if (k + 1 < elements_num) {
			cout << placeholder << " * ";
		}
		else {
			cout << placeholder << " = " << total << endl << endl;
		}
		k++;
	}
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Establish variables
	double A = 4.0, B = 3.0, C = 2.0, D = 1.0, F = 0.0;
	double GPA = 0.0;
	bool summa_cum_laude = false;
	bool magna_cum_laude = false;
	bool cum_laude = false;
	bool without_honors = false;

	//Set up classes
	double grade1 = A;
	double grade2 = A;
	double grade3 = B;
	double grade4 = A;

	//Calculate GPA
	GPA = (grade1 + grade2 + grade3 + grade4) / 4;

	//Calculate honor level
	if (GPA >= 3.9) {
		summa_cum_laude = true;
	}
	else if (GPA >= 3.8 && GPA <= 3.89) {
		magna_cum_laude = true;
	}
	else if (GPA >= 3.65 && GPA <= 3.79) {
		cum_laude = true;
	}
	else if (GPA < 3.65) {
		without_honors = true;
	}

	//Output all the data to the console so the user can read it
	cout << "Your GPA is currently "
		<< boolalpha		//makes everything show up as true or false instead of 1 or 0
		<< GPA
		<< endl;
	cout << "Graduating summa cum laude is "
		<< summa_cum_laude
		<< endl
		<< "Graduating magna cum laude is "
		<< magna_cum_laude
		<< endl
		<< "Graduating cum laude is "
		<< cum_laude
		<< endl
		<< "Graduating without honors is "
		<< without_honors
		<< endl;
}
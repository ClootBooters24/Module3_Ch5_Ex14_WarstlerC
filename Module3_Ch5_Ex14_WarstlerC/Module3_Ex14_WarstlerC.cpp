#include <iostream>
using namespace std;
int main()
{
	double weightPounds = 0.0;
	double heightFeet = 0.0;
	double age = 0.0;
	double BMR = 0.0;
	char gender; 
	
	cout << "Please enter your weight in pounds: ";
	cin >> weightPounds;
	weightPounds = weightPounds / 2.2;

	cout << "Please enter your height in feet: ";
	cin >> heightFeet;
	heightFeet = (heightFeet * 12) * 2.54;

	cout << "Please enter your age in years: ";
	cin >> age;

	cout << "Type M for Male or F for Female: ";
	cin >> gender;
	if (gender == 'f') {
		BMR = (10 * weightPounds) + (6.25 * heightFeet) - (5 * age) - 161;
		cout << "Your BMR is: " << BMR << endl;
	}
	else if (gender == 'm') {
		BMR = (10 * weightPounds) + (6.25 * heightFeet) - (5 * age) + 5;
		cout << "Your BMR is: " << BMR << endl;
	}
	else cout << "Error, please try again" << endl;
}


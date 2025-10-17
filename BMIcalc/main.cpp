#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	cout << "BMI Calculator" << endl;
	cout << "--------------" << endl;
	cout << "Weight:   kg\b\b\b";
	double weight;
	cin >> weight;
	cout << "Height: m\b\b\b\b\b\b\b";
	double height;
	cin >> height;
	double bmi = weight / pow(height, 2);
	cout << fixed << setprecision(2);
	cout << "Your BMI is \"" << bmi << "\"" << endl;

	system("pause");
	return 0;
}
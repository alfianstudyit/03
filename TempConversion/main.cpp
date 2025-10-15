#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	cout << "konversi suhu" << endl;
	cout << "" << endl;
	cout << "input celcius : ";
	double celcius, reamur, fahrenhite;
	cin >> celcius;
	cout << "input celcius : " << celcius << char(248) << "C" << endl;
	reamur = 4.00 / 5.00 * celcius;
	cout << "hasil konversi C to R : " << reamur << char(248) << "R" << endl;
	fahrenhite = (celcius * 9.00 / 5.00) + 32;
	cout << "hasil konversi C to F : " << fahrenhite << char(248) << "F" << endl;

	system("pause");
	return 0;
}
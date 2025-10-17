#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	cout << "hitung sisi miring" << endl;
	cout << "" << endl;
	cout << "    |\\ " << endl;
	cout << "    | \\ " << endl;
	cout << "    |  \\ " << endl;
	cout << "    |   \\ " << endl;
	cout << " a  |    \\ c" << endl;
	cout << "    |     \\ " << endl;
	cout << "    |      \\ " << endl;
	cout << "     ------" << endl;
	cout << "        b" << endl;

	/*cout << "masukan sisi a		: ";
	double sisi_a;
	cin >> sisi_a;
	cout << "masukan sisi b		: ";
	double sisi_b;
	cin >> sisi_b;*/

	double sisi_a,sisi_b,sisi_c;
	cout << "masukan sisi a dan b	: ";
	cin >> sisi_a >> sisi_b;
	sisi_c = sqrt(pow(sisi_a, 2) + pow(sisi_b, 2));
	cout << fixed << setprecision(2);
	cout << "sisi miring(c) adalah	: " << sisi_c << endl;

	system("pause");
	return 0;

}
#include <iostream>
using namespace std;
int main() {
	double MONEY, Gn, Tp;
	cout << "GIVE US SOME MONEY:" << endl;
	cin >> MONEY;
	Gn = MONEY * 0.4;
	Tp = MONEY * 0.3;
	cout << "Money given to Gynecology: " << endl << Gn << endl;
	cout << "Money given to Traumatology: " << endl << Tp << endl;
	cout << "Money given to Pediatrics: " << endl << Tp << endl;
}

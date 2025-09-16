#include <iostream>
using namespace std;


int main()
{
	int a, b;
	cout << "Enter A (bigger number): ";
	cin >> a;
	cout << "Enter B (smaller number): ";
	cin >> b;
	while (a > b) {
		if (a % 2 == 0 && a / 2 >= b) {
			a /= 2;
			cout << ":2\n";
		}
		else {
			a -= 1;
			cout << "-1\n";
		}
	}
	cout << "Done! ";
}

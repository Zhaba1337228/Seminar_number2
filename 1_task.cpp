#include <iostream>
using namespace std;


int main()
{
    double x, y;
    cout << "Enter starting amount (x): ";
    cin >> x;
    cout << "Enter target amount (y)";
    cin >> y;
    int day = 1;
    double suma = x;
    cout << "\nDay" << day << ": " << suma << "\n";
    while (suma <= y) {
        ++day;
        suma *= 1.10;
        cout << "Day" << day << ": " << suma << "\n";
    }
    cout << "\n Nebo v kletochky! " << y << " on day " << day << "!\n";
}

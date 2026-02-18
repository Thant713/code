#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double b, h, a;

    cout << "Insert base: ";
    cin >> b;
    cout << "Insert height: ";
    cin >> h;

    a = 0.5 * b * h;

    cout << "The area of the triangle is: " << a << endl;

    return 0;
}
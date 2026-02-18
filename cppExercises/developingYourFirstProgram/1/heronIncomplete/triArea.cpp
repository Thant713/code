#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, s, area;
    
    cout << "Insert side 1: "; 
    cin >> a; 
    cout << "Insert side 2: ";
    cin >> b; 
    cout << "Insert side 3: "; 
    cin >> c;

    s = (a + b + c) / 2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));

    cout << "The area of the triangle is " << area << endl;

    return 0;
}
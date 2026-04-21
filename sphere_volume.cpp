#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    double radius;

    cout << "Enter radius: ";
    cin >> radius;

    double volume = (4.0 / 3.0) * 3.142 * pow(radius, 3);
    cout << "Volume of sphere: " << volume << endl;
    return 0;
}
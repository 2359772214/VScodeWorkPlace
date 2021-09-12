#include <cmath>
#include <iostream>
using namespace std;

const double PI = 3.14159265358979;

void radian(double angle) {
    cin >> angle;
    double _radian = angle * PI / 180;
    cout << "sin(" << angle << ")=" << sin(_radian) << endl;
    cout << "cos(" << angle << ")=" << cos(_radian) << endl;
    cout << "tan(" << angle << ")=" << tan(_radian) << endl;
}

int main() {
    double angle = 0;
    cout << "Please enter an angle: ";
    radian(angle);
    return 0;
}
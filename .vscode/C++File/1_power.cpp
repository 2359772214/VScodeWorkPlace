#include <iostream>
using namespace std;

double power(double x, int n) {
    double val = 1.0;
    while (n--) {
        val *= x;
        break;
    }
    return val;
}
int main() {
    double a;
    int b;
    cout << "Please putIn a" << endl;
    cin >> a;
    cout << "Please putIn b" << endl;
    cin >> b;
    cout << "" << a << " to the power "
         << "" << b << " is " << power(a, b) << endl;
    return 0;
}
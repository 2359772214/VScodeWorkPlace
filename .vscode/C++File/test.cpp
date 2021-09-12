#include <iostream>
#include <stdio.h>
using namespace std;

int f(int a, int b) {
    int c = 0;
    c = a + b;
    return c;
}

int main() {
    int a;
    int b;
    cout << "Please Input \na = ";
    cin >> a;
    cout << "Please Input \nb = ";
    cin >> b;
    cout << "a+b=" << f(a, b) << endl;
    return 0;
}
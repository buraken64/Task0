//
// Created by HP on 26.11.2025.
//

#include "Enes_Burak_55889_Task0.h"

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "1. ";
    cin >> a;

    cout << "2. ";
    cin >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Diff: " << a - b << endl;
    cout << "Mult: " << a * b << endl;
    cout << "Divisors of " << a << ": ";

    for (int i = 1; i <= abs(a); i++) {
        if (a % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    cout << "Divisors of " << b << ": ";
    for (int i = 1; i <= abs(b); i++) {
        if (b % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

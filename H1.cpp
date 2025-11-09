#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

void calcSum(int a, int b) { cout << "Summa (calcSum): " << a + b << '\n'; }

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe (calcDiv): jakaja ei saa olla nolla!\n";
    } else {
        cout << fixed << setprecision(2)
        << "Osamaara (calcDiv): " << (double)a / b << '\n';
    }
}

int retSum(int a, int b) { return a + b; }

float retDiv(int a, int b) {
    if (b == 0) throw runtime_error("jakaja ei saa olla nolla!");
    return (float)a / b;
}

int main() {
    int a, b;
    cout << "Anna kokonaisluku a: "; cin >> a;
    cout << "Anna kokonaisluku b: "; cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    cout << "Summa (retSum): " << retSum(a, b) << '\n';

    try {
        cout << fixed << setprecision(2)
        << "Osamaara (retDiv): " << retDiv(a, b) << '\n';
    } catch (runtime_error &e) {
        cout << "Virhe (retDiv): " << e.what() << '\n';
    }
}

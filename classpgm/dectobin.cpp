#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n > 1)
        decimalToBinary(n / 2);
    cout << n % 2;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    if (cin.fail()) {
        cerr << "Invalid";
    }
    decimalToBinary(num);
    }
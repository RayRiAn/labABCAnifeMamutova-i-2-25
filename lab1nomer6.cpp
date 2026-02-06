#include <iostream>
#include <string>
using namespace std;

string toBase(int number, int base) {

    string digits = "0123456789ABCDEF";
    string result;

    while (number > 0) {
        int remainder = number % base;
        result = digits[remainder] + result;
        number /= base;
    }

    if (result.empty()) {
        return "0";
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "RU");
    int decimalNumber;
    int base;

    cout << "Введите десятичное число: ";
    cin >> decimalNumber;

    cout << "Введите основание системы счисления (от 2 до 16): ";
    cin >> base;

    if (base < 2 || base > 16) {
        cout << "Основание должно быть от 2 до 16." << endl;
        return 1;
    }

    string convertedNumber = toBase(decimalNumber, base);
    cout << "В системе " << base << " число: " << convertedNumber << endl;

    return 0;
}

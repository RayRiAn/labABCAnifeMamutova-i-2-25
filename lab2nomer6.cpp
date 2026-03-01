#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Конвертер 16-битного IEEE 754 в десятичное число" << endl;
    cout << "Введите 16 бит:" << endl;

    int znakVvod, exponentVvod, mantissaVvod;

    cout << "Знак (0 или 1): ";
    cin >> znakVvod;

    cout << "Экспонента (5 бит, число от 0 до 31): ";
    cin >> exponentVvod;

    cout << "Мантисса (10 бит, число от 0 до 1023): ";
    cin >> mantissaVvod;

    if (exponentVvod == 0 && mantissaVvod == 0) {
        cout << "Результат: 0" << endl;
        return 0;
    }

    double znak;
    if (znakVvod == 0)
    {
        znak = 1.0;
    }
    else
    {
        znak = -1.0;
    }

    int exponent = exponentVvod - 15;

    double mantissa = 1.0 + static_cast<double>(mantissaVvod) / 1024.0;

    double result = znak * mantissa * pow(2.0, exponent);

    cout << "Результат: " << result << endl;

    return 0;
}

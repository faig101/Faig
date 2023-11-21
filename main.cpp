#include "Fraction.h"
#include <iostream>
using namespace std;
int main() {
    Fraction fraction1, fraction2;
    cout << "Введите первую дробь:\n";
    fraction1.input();
    cout << "\nВведите вторую дробь:\n";
    fraction2.input();
    Fraction sum = fraction1.add(fraction2);
    Fraction difference = fraction1.subtract(fraction2);
    Fraction product = fraction1.multiply(fraction2);
    Fraction quotient = fraction1.divide(fraction2);
    cout << "Сумма: " << endl;
    sum.show();
    cout << "Разность: " << endl;
    difference.show();
    cout << "Произведение: " << endl;
    product.show();
    cout << "Частное: " << endl;
    quotient.show();

    return 0;
}

#include "Fraction.h"
#include <iostream>
using namespace std;
Fraction::Fraction() : numerator(0), denominator(1) {}
Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    if (denominator == 0) {
        cout << "Знаменатель не может быть равен нулю." << endl;
    }
    simplify();
}

void Fraction::input() {
    cout << "Введите числитель: ";
    cin >> numerator;

    cout << "Введите знаменатель: ";
    cin >> denominator;

    if (denominator == 0) {
        cout << "Знаменатель не может быть равен нулю." << endl;
    }
    simplify();
}

void Fraction::show() const {
    cout << numerator << "/" << denominator;
}

Fraction Fraction::add(const Fraction& sec) const {
    int resultNumerator = numerator * sec.denominator + sec.numerator * denominator;
    int resultDenominator = denominator * sec.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

Fraction Fraction::subtract(const Fraction& sec) const {
    int resultNumerator = numerator * sec.denominator - sec.numerator * denominator;
    int resultDenominator = denominator * sec.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

Fraction Fraction::multiply(const Fraction& sec) const {
    int resultNumerator = numerator * sec.numerator;
    int resultDenominator = denominator * sec.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

Fraction Fraction::divide(const Fraction& sec) const {
    if (sec.numerator == 0) {
        cout << "Деление на ноль." << endl;}
    int resultNumerator = numerator * sec.denominator;
    int resultDenominator = denominator * sec.numerator;
    return Fraction(resultNumerator, resultDenominator);
}
void Fraction::simplify() {
    int gcd = greatestCommonDivisor(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}
int Fraction::greatestCommonDivisor(int first, int sec) const {
    while (sec != 0) {
        int greatest = first;
        sec = first % sec;
        first = greatest;
    }
    return first;
}

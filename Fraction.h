#ifndef FRACTION_H
#define FRACTION_H
class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction();
    Fraction(int num, int denom);

    void input();
    void show();
    Fraction add(const Fraction& sec);
    Fraction subtract(const Fraction& other);
    Fraction multiply(const Fraction& other);
    Fraction divide(const Fraction& other);

private:
    void simplify();
    int greatestCommonDivisor(int a, int b);
};

#endif

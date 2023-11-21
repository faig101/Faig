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
    void show()const;
    Fraction add(const Fraction& sec)const;
    Fraction subtract(const Fraction& other)const;
    Fraction multiply(const Fraction& other)const;
    Fraction divide(const Fraction& other)const;

private:
    void simplify();
    int greatestCommonDivisor(int a, int b)const;
};

#endif

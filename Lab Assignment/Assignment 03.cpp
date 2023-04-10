#include <iostream>
#include<conio.h>
#include <cassert>
#include <cmath>

using namespace std;

class Fraction {
private:
 int numerator;
 int denominator;

public:
 Fraction(int num, int denom) {
 assert(denom != 0);
 assert(typeid(num) == typeid(int) && typeid(denom) == typeid(int));
 numerator = num;
 denominator = denom;
 }
 void reduce() {
        int gcd = getGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }
 int getGCD(int a, int b) {
        if (b == 0)
            return a;
        return getGCD(b, a % b);
 }


   Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        Fraction result(num, den);
        result.reduce();
        return result;
    }

 friend ostream& operator<<(ostream& os, const Fraction& f) {
 os << f.numerator << "/" << f.denominator;
 return os;
 }
 string repr() const {
 return "Fraction(" + to_string(numerator) + ", " + to_string(denominator) + ")";
 }
};

int main() {
 Fraction f1(3, 4);
 Fraction f2(1, 2);
 Fraction f3 = f1 + f2;

 cout << "f1 = " << f1 << endl;
 cout << "f2 = " << f2 << endl;
 cout << "f3 = " << f3 << endl;
 cout << "f3.repr() = " << f3.repr() << endl;

 getch ;
}

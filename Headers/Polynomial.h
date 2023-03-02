
#include<map>

#include"Arithmetic.h"

using namespace std;

class Polynomial
{
private:
    size_t degree;
    map<size_t,double> coefficients;
public:
    Polynomial();
    Polynomial(map<size_t,double> coefficients);
    ~Polynomial();

    size_t getDegree();

    void setCoefficient(size_t exponent, long double coefficient);
    long double getCoefficient(size_t exponent);

    long double evaluateAt(long double x);

    Polynomial add(Polynomial& summand);
    Polynomial multiply(long double multiplier);
    Polynomial multiply(Polynomial& multiplier);
};

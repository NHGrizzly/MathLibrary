
#include<map>

using namespace std;

class Polynomial
{
protected:
    size_t degree;
    map<size_t,double> coefficients;
public:
    Polynomial();
    Polynomial(map<size_t,double> coefficients);
    ~Polynomial();

    size_t getDegree();

    void setCoefficient(size_t exponent, long double coefficient);
    long double getCoefficient(size_t exponent);

    Polynomial multiply(Polynomial& multiplier);
};


#include"Polynomial.h"

Polynomial::Polynomial()
{
    this->degree = 0;
}

Polynomial::Polynomial(map<size_t,double> coefficients)
{
    size_t degree = 0;

    auto it = coefficients.begin();

    while (it!=coefficients.end())
    {
        if(it->first > degree)
            degree = it->first;

        it++;
    }

    this->coefficients = coefficients;
    this->degree = degree;
}

Polynomial::~Polynomial()
{

}

size_t Polynomial::getDegree()
{
    return this->degree;
}

void Polynomial::setCoefficient(size_t exponent, long double coefficient)
{
    if(exponent > this->degree)
        this->degree = exponent;

    this->coefficients[exponent] = coefficient;
}

long double Polynomial::getCoefficient(size_t exponent)
{
    return this->coefficients[exponent];
}

long double Polynomial::evaluateAt(double x)
{
    return -1.0;
}

Polynomial Polynomial::multiply(Polynomial& multiplier)
{
    Polynomial out;

    out.degree = this->degree * multiplier.degree;

    for (size_t i = 0; i < multiplier.degree; i++)
    {
        for (size_t j = 0; j < this->degree; j++)
        {
            out.coefficients[i*j] += this->coefficients[j] * multiplier.coefficients[i];
        }
    }

    return out;
}

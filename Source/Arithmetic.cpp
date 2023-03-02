
#include "../Headers/Arithmetic.h"

long double power(long double base, size_t exponent)
{
    long double out = 1, exp = exponent;

    while(exp>0)
    {
        out*=base;
        exp--;
    }
    
    return out;
}


#include"Polynomial.h"

#include<iostream>
#include"gtest/gtest.h"

using namespace std;

TEST(PolynomialGetDegree, ZeroPolynomial)
{
    Polynomial testPoly;
    ASSERT_EQ(testPoly.getDegree(), 0);
}

TEST(PolynomialGetDegree, LinearPolynomial)
{
    map<size_t, double> data;
    data[1] = 0.5;

    Polynomial testPoly = Polynomial(data);

    ASSERT_EQ(testPoly.getDegree(), 1);
}

TEST(PolynomialSetDegree, ZeroToLinearPolynomial)
{
    Polynomial testPoly;

    ASSERT_EQ(testPoly.getDegree(), 0);

    testPoly.setCoefficient(1,1);

    ASSERT_EQ(testPoly.getDegree(), 1);
}

int main(int argc, char const *argv[])
{
    testing::InitGoogleTest();

    if(RUN_ALL_TESTS())
        printf("FAILURE\n");
    else
        printf("SUCCESS\n");
        

    return 0;
}


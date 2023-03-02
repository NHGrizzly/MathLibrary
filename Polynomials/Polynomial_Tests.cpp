
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

TEST(PolynomialSetCoefficient, ZeroToLinearPolynomial)
{
    Polynomial testPoly;

    ASSERT_EQ(testPoly.getDegree(), 0);

    testPoly.setCoefficient(1,27.2);

    ASSERT_EQ(testPoly.getDegree(), 1);
}

TEST(PolynomialSetCoefficient, ZeroToHighOrderPolynomial)
{
    Polynomial testPoly;

    ASSERT_EQ(testPoly.getDegree(), 0);

    testPoly.setCoefficient(INT32_MAX, 51.9);

    ASSERT_EQ(testPoly.getDegree(), INT32_MAX);
}

TEST(PolynomialEvaluateAt, ZeroPolynomialYieldsZero)
{
    Polynomial testPoly;

    ASSERT_EQ(testPoly.evaluateAt(573.0), 0);
}

TEST(PolynomialEvaluateAt, LinearPolynomialYieldsX)
{
    map<size_t, double> data;
    data[1]++;

    Polynomial testPoly = Polynomial(data);

    ASSERT_EQ(testPoly.evaluateAt(45), 45);
    ASSERT_EQ(testPoly.evaluateAt(-1), -1);
    ASSERT_EQ(testPoly.evaluateAt(3), 3);
    ASSERT_EQ(testPoly.evaluateAt(99999), 99999);
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


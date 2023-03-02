
#include "../Headers/Arithmetic.h"

#include<iostream>
#include"gtest/gtest.h"

using namespace std;

TEST(Power, AnythingToZeroIsOne)
{
    ASSERT_EQ(power(1,0), 1);
    ASSERT_EQ(power(21.4,0), 1);
    ASSERT_EQ(power(12,0), 1);
    ASSERT_EQ(power(DBL_MAX,0), 1);
    ASSERT_EQ(power(-249,0), 1);
}

TEST(Power, AnythingToOneIsItself)
{
    ASSERT_EQ(power(1,1), 1);
    ASSERT_EQ(power(21.4,1), 21.4);
    ASSERT_EQ(power(12,1), 12);
    ASSERT_EQ(power(DBL_MAX,1), DBL_MAX);
    ASSERT_EQ(power(-249,1), -249);
}

TEST(Power, OneToAnyPowerIsOne)
{
    ASSERT_EQ(power(1,2), 1);
    ASSERT_EQ(power(1,92), 1);
    ASSERT_EQ(power(1,INT16_MAX), 1);
}

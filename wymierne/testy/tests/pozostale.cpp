#include <gtest/gtest.h>
#include "../src/rational.h"

TEST(Rational, normalized){
 Rational R1(1,6);
 R1 = Rational::normalized(4,6);
 Rational R(2,3);
 ASSERT_EQ(R,R1);
}

TEST(Rational, normalize){
 Rational R1(4,6);
 Rational R2(1,1);
 R2 = Rational::normalize(R1);
 Rational R(2,3);
 ASSERT_EQ(R, R2);
}

TEST(Rational, gcd){
 ASSERT_EQ(26,count_gcd(78,52));
}

TEST(Rational, numerator){
 Rational R1(66,7);
 ASSERT_EQ(66,R1.numerator());
}

TEST(Rational, denominator){
 Rational R1(1,6);
 ASSERT_EQ(6,R1.denominator());
}

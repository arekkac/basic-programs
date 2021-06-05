#include <gtest/gtest.h>
#include "../src/rational.h"

TEST(Rational, odejmowanie_2_liczb){
 Rational R1(1,4);
 Rational R2(1,5);
 Rational R(1,20);
 ASSERT_EQ(R,R1 - R2);
}

TEST(Rational, odjecie_liczby){
 Rational R1(7,4);
 Rational R(-5,4);
 ASSERT_EQ(R,R1 - 3);
}

TEST(Rational, R_odjete_od_liczby){
 Rational R1(1,6);
 Rational R(5,6);
 ASSERT_EQ(R,1 - R1);
}

TEST(Rational, znak_minus){
 Rational R1(-1,4);
 Rational R(1,4);
 ASSERT_EQ(R,-R1);
}

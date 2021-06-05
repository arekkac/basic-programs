#include <gtest/gtest.h>
#include "../src/rational.h"

TEST(Rational, przypisanie_liczby_do_R){
 Rational R1(1,6);
 Rational R(4,1);
 ASSERT_EQ(R,R1 = 4);
}

TEST(Rational, przypisanie_R_do_R){
 Rational R1(1,6);
 Rational R2(1,3);
 Rational R(1,6);
 ASSERT_EQ(R,R2 = R1);
}

TEST(Rational, copy_constructor){
 Rational R1(1,6);
 Rational R2 = R1;
 Rational R(1,6);
 ASSERT_EQ(R,R2);
}

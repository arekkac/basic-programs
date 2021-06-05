#include <gtest/gtest.h>
#include "../src/rational.h"

TEST(Rational, mnozenie_2_liczb){
 Rational R1(1,4);
 Rational R2(1,5);
 Rational R(1,20);
 ASSERT_EQ(R,R1 * R2);
}

TEST(Rational, mnozenie_przez_liczbe){
 Rational R1(1,4);
 Rational R(3,4);
 ASSERT_EQ(R,R1 *3);
}

TEST(Rational, liczba_pomnozona_przez_R){
 Rational R1(1,6);
 Rational R(2,3);
 ASSERT_EQ(R,4 * R1);
}

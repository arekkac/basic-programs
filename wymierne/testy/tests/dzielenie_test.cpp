#include <gtest/gtest.h>
#include "../src/rational.h"

TEST(Rational, dzielenie_2_liczb){
 Rational R1(1,4);
 Rational R2(1,5);
 Rational R(5,4);
 ASSERT_EQ(R,R1 / R2);
}

TEST(Rational, dzielenie_przez_liczbe){
 Rational R1(1,4);
 Rational R(1,12);
 ASSERT_EQ(R,R1 /3);
}

TEST(Rational, liczba_podzielona_przez_R){
 Rational R1(1,6);
 Rational R(24,1);
 ASSERT_EQ(R,4 / R1);
}

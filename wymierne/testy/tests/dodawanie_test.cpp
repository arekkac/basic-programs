#include <gtest/gtest.h>
#include "../src/rational.h"

TEST(Rational, dodawanie_2_liczb){
 Rational R1(1,4);
 Rational R2(1,5);
 Rational R(9,20);
 ASSERT_EQ(R,R1 + R2);
}

TEST(Rational, dodanie_liczby){
 Rational R1(1,4);
 Rational R(13,4);
 ASSERT_EQ(R,R1 +3);
}

TEST(Rational, liczba_dodana_do_R){
 Rational R1(1,6);
 Rational R(13,6);
 ASSERT_EQ(R,2 + R1);
}

TEST(Rational, znak_plus){
 Rational R1(-1,4);
 Rational R(-1,4);
 ASSERT_EQ(R,+R1);
}

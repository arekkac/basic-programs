#include <gtest/gtest.h>
#include "../src/rational.h"

TEST(Rational, wieksze_lub_rowne){
 Rational R1(1,4);
 Rational R(5,4);
 ASSERT_EQ(1,R >= R1);
}

TEST(Rational, mniejsze_lub_rowne){
 Rational R1(1,4);
 Rational R(1,12);
 ASSERT_EQ(1,R <= R1);
}

TEST(Rational, rowne){
 Rational R1(1,6);
 Rational R(24,1);
 ASSERT_EQ(0,R == R1);
}

TEST(Rational, wieksze){
 Rational R1(1,6);
 Rational R(24,1);
 ASSERT_EQ(1,R > R1);
}

TEST(Rational, mniejsze){
 Rational R1(1,6);
 Rational R(24,1);
 ASSERT_EQ(0,R < R1);
}

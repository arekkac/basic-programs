#include <gtest/gtest.h>
#include "../src/rational.h"
#include <iostream>
#include <string>

TEST(Rational, istream){
 Rational R1(1,4);
 std::istringstream in; 
 in >> R1;
 Rational R(1,4);
 ASSERT_EQ(R,R1);
}

TEST(Rational, ostream){
 Rational R1(1,4);
 std::ostringstream out; 
 out << R1;
 ASSERT_EQ("1/4",out.str());
}



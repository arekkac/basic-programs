#include <gtest/gtest.h>
#include "../src/adts.h"



TEST(stack, peek){

My_stack_v<int> stack;




stack.push(11);
stack.push(22);
stack.push(33);
stack.push(44);
stack.push(55);


 ASSERT_EQ(55,stack.peek());
}

TEST(stack, pop){

My_stack_v<int> stack;




stack.push(11);
stack.push(22);
stack.push(33);
stack.push(44);
stack.push(55);


 ASSERT_EQ(55,stack.pop());
}

TEST(stack, empty){

My_stack_v<int> stack;




stack.push(11);
stack.push(22);
stack.push(33);
stack.push(44);
stack.push(55);


 ASSERT_EQ(0,stack.isEmpty());
}

TEST(stack, size){

My_stack_v<int> stack;




stack.push(11);
stack.push(22);
stack.push(33);
stack.push(44);
stack.push(55);


 ASSERT_EQ(5,stack.size());
}


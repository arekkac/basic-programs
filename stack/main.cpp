#include <iostream>
#include <vector>
#include "adts.h"

int main()
{
    
    My_stack_v<int> stack;
    stack.push(12);
    stack.push(21);
    std::cout << stack.peek() << std::endl;
    std::cout << stack.pop() << std::endl;
    std::cout << stack.peek() << std::endl;
    std::cout << stack.size() << std::endl;
    std::cout << stack.isEmpty() << std::endl;
    std::cout << stack.pop() << std::endl;
    std::cout << stack.isEmpty() << std::endl;
    My_stack_v<int> second;
    for(int i = 0; i < 104;i++)
    {
        second.push(i);
    }
    std::cout << second.peek() << std::endl;

    std::cout << "double" << std::endl;

    My_stack_v<double> stack1;
    stack1.push(12.12);
    stack1.push(21.21);
    std::cout << stack1.peek() << std::endl;
    std::cout << stack1.pop() << std::endl;
    std::cout << stack1.peek() << std::endl;
    std::cout << stack1.size() << std::endl;
    std::cout << stack1.isEmpty() << std::endl;
    std::cout << stack1.pop() << std::endl;
    std::cout << stack1.isEmpty() << std::endl;
    My_stack_v<double> second1;
    for(int i = 0; i < 104;i++)
    {
        double a = i/1000.0;
        second1.push(i+a);
    }
    std::cout << second1.peek() << std::endl;

    std::cout << "char" << std::endl;

    My_stack_v<char> stack2;
    stack2.push('a');
    stack2.push('b');
    std::cout << stack2.peek() << std::endl;
    std::cout << stack2.pop() << std::endl;
    std::cout << stack2.peek() << std::endl;
    std::cout << stack2.size() << std::endl;
    std::cout << stack2.isEmpty() << std::endl;
    std::cout << stack2.pop() << std::endl;
    std::cout << stack2.isEmpty() << std::endl;
    My_stack_v<char> second2;
    for(int i = 0; i < 104;i++)
    {
        second2.push(static_cast<char>(i));
    }
    std::cout << second2.peek() << std::endl;
    

    

    return 0;
}
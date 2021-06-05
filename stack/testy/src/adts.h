#ifndef ADTS_H
#define ADTS_H

#include <iostream>
#include <vector>


constexpr int max_stack_size = 100;

template<class T>
class My_stack_v 
{
    private:
        std::vector<T> stack;
    public:
        T pop();
        void push(T x);
        bool isEmpty();
        int size();
        T peek() const;
        ~My_stack_v(){}
        
};


template<class T>
void My_stack_v<T>::push(T x)
{
    if(stack.size() > max_stack_size)
        std::cout << "The stack is full. You can't add more objects" << std::endl;
    else
        stack.push_back(x);
    
}

template<class T>
bool My_stack_v<T>::isEmpty()
{
    if(stack.size() == 0)
        return true;
    else
        return false;
}

template<class T>
T My_stack_v<T>::peek() const
{
    return stack.back();
}

template<class T>
int My_stack_v<T>::size()
{
    return stack.size();
}

template<class T>
T My_stack_v<T>::pop()
{
    T tmp{};
    if(!isEmpty())
    {
        tmp = peek();
        stack.pop_back();
    }
        
    return tmp;

}


#endif
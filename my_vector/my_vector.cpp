#include "my_vector.h"
#include <iostream>

using namespace std;

int main()
{
    My_vector<int> vec;
    std::cout << "size = " << vec.size() << std::endl;
    cout << "capacity = " << vec.capacity() << endl;
    cout << "empty = " << vec.empty() << endl;
    vec.push_back(23);
    vec.push_back(24);
    vec.push_back(25);
    //vec.push_back(26);
    //vec.push_back(27);
    //vec.push_back(28);
    vec.pop_back();
    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;
    cout << "empty = " << vec.empty() << endl;
    cout << "front = " << vec.front() << endl;
    cout << "back = " << vec.back() << endl;
    int * ptr = vec.begin();
    cout << "begin = " << *ptr << endl;
    ptr = vec.end();
    ptr -=1;
    cout << "end = " << *ptr << endl;
    vec.resize(2);
    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;
    cout << "resize" << endl;
    vec.resize(8);
    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;
    cout << "4 element = " << vec[3] << endl;
    cout << "4 element z at() = " << vec.at(3) << endl;
    ptr = vec.begin();
    cout << "begin = " << *ptr << endl;
    ptr = vec.end();
    ptr -=1;
    cout << "end = " << *ptr << endl;
    cout << "front = " << vec.front() << endl;
    cout << "back = " << vec.back() << endl;
    cout << "reserve" << endl;
    vec.reserve(12);
    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;
    vec.reserve(11);
    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;
    cout << "czyszczenie" << endl;
    vec.clear();
    std::cout << "size = " << vec.size() << std::endl;
    cout << "capacity = " << vec.capacity() << endl;
    cout << "empty = " << vec.empty() << endl;
    vec.push_back(23);
    std::cout << "size = " << vec.size() << std::endl;
    cout << "capacity = " << vec.capacity() << endl;
    cout << "empty = " << vec.empty() << endl;
    vec.push_back(24);
    vec.push_back(25);
    vec.push_back(27);
    vec.push_back(28);
    vec.insert(3,26);
    cout << "wypisywanie" << endl;
    for(size_t i = 0; i < vec.size(); i++)
    {
      cout << vec[i] << endl;
    }
    ptr = vec.begin();
    cout << "begin = " << *ptr << endl;
    ptr = vec.end();
    ptr -=1;
    cout << "end = " << *ptr << endl;
    cout << "front = " << vec.front() << endl;
    cout << "back = " << vec.back() << endl;
    int * p = vec.data();
    p += 3;
    *p = 30;
    for(size_t i = 0; i < vec.size(); i++)
    {
      cout << vec[i] << endl;
    }
    cout << "second " << endl;
    My_vector<int> vect;
    vect = vec;
    for(size_t i = 0; i < vect.size(); i++)
    {
      cout << vect[i] << endl;
    }
    cout << "front = " << vect.front() << endl;
    cout << "back = " << vect.back() << endl;

    return 0;
}
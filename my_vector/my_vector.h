#ifndef MY_VECTOR
#define MY_VECTOR

#include <algorithm>
#include <iostream>


template<class T>
class My_vector 
{
    private:
        int size_m;
        T* vector;
        int capacity_m;
    public:
        T& at(int n);
        void push_back(const T & x);
        void pop_back();
        T& back();
        int size();
        void resize(int n);
        void clear();
        int capacity();
        bool empty();
        void reserve(int n);
        T* data();
        T& front();
        void insert(int position, const T& value);
        T& operator[](int n);
        T* begin();
        T* end();
        My_vector();
        My_vector(int size);
        My_vector(int size, const T& initial_value);
        ~My_vector();
        My_vector<T>& operator=(const My_vector<T>& vec);
};

template<class T>
My_vector<T>::My_vector()
{
    size_m = 0;
    capacity_m = 0;
    vector = nullptr;
}

template<class T>
My_vector<T>::My_vector(int size)
{
    size_m = size;
    capacity_m = size;
    vector = new T [size];
    for(int i = 0; i < size_m; i++)
    {
        vector[i] = 0; 
    }
}

template<class T>
My_vector<T>::My_vector(int size, const T& initial_value)
{
    size_m = size;
    capacity_m = size;
    vector = new T [size_m];
    for(int i = 0; i < size_m;i++)
    {
        vector[i] = initial_value;
    }
}

template<class T>
My_vector<T>::~My_vector()
{
    delete [] vector;
}

template<class T>
bool My_vector<T>::empty()
{
    return !(size_m > 0);
}

template<class T>
T* My_vector<T>::begin()
{
    return vector;
}

template<class T>
T* My_vector<T>::end()
{
    return vector+size();
}

template<class T>
T& My_vector<T>::front()
{
    return vector[0];
}

template<class T>
T& My_vector<T>::back()
{
    return vector[size_m-1];
}

template<class T>
T& My_vector<T>::at(int n)
{
    return vector[n];
}

template<class T>
void My_vector<T>::insert(int position, const T& value)
{
    if(size_m >= capacity_m)
    {
        reserve(size_m+5);
    }
    T * tmp = new T[size_m+1];
    for(int i = 0; i < position;i++)
    {
        tmp[i] = vector[i];
    }
    tmp[position] = value;
    for(int i = position+1;i < size_m+1;i++)
    {
        tmp[i] = vector[i-1];
    }
    size_m += 1;
    delete [] vector;
    vector = tmp;
}

template<class T>
void My_vector<T>::push_back(const T & x)
{
    if(size_m >= capacity_m)
    {
        reserve(size_m+5);
    }
    vector[size_m] = x;
    size_m++;
}

template<class T>
void My_vector<T>::pop_back()
{
    size_m -= 1;
}

template<class T>
My_vector<T>& My_vector<T>::operator=(const My_vector<T>& vec)
{
    delete [] vector;
    size_m = vec.size_m;
    capacity_m = vec.capacity_m;
    vector = new T[size_m];
    for(int i = 0; i < size_m;i++)
    {
        vector[i] = vec.vector[i];
    }
    return *this;
}

template<class T>
T& My_vector<T>::operator[](int n)
{
    return vector[n];
}

template<class T>
void My_vector<T>::reserve(int n)
{
    if(n > capacity_m)
    {
       
        T* tmp = new T[n];
        for(int i = 0; i <size_m;i++)
        {
            tmp[i] = vector[i];
        }
        capacity_m = n;
        delete[] vector;
        vector = tmp;
    }
    

}

template<class T>
T* My_vector<T>::data()
{
    return vector;
}

template<class T>
int My_vector<T>::size()
{
    return size_m;
}

template<class T>
void My_vector<T>::resize(int n)
{
    if(n > size_m)
    {
        reserve(n);
        for(int i = size_m;i < n;i++)
        {
            vector[i] = 0;
        }
        size_m = n;
    }
}

template<class T>
void My_vector<T>::clear()
{
    vector = nullptr;
    size_m = 0;
    capacity_m = 0;
}

template<class T>
int My_vector<T>::capacity()
{
    return capacity_m;
}

#endif
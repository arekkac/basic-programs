#include <gtest/gtest.h>
#include "../src/my_vector.h"



TEST(vector, push_back){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);


    ASSERT_EQ(5,vector.size());
}

TEST(vector, pop_back){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();


    ASSERT_EQ(4,vector.size());
}

TEST(vector, create_z_parametrem){

    My_vector<int> vector(5);

    

    ASSERT_EQ(0,vector.front());
}

TEST(vector, create_z_wartoscia){

    My_vector<int> vector(5,4);

    

    ASSERT_EQ(4,vector.front());
}

TEST(vector, empty){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();


    ASSERT_EQ(0,vector.empty());
}

TEST(vector, begin){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();
    int * t = vector.begin();


    ASSERT_EQ(11,*t);
}

TEST(vector, end){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();
    int * t = vector.end()-1;

    ASSERT_EQ(44,*t);
}

TEST(vector, front){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();


    ASSERT_EQ(11,vector.front());
}

TEST(vector, back){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();


    ASSERT_EQ(44,vector.back());
}

TEST(vector, at){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();


    ASSERT_EQ(44,vector.at(3));
}

TEST(vector, operator_dostepu){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();


    ASSERT_EQ(44,vector[3]);
}

TEST(vector, insert){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();
    vector.insert(3,77);


    ASSERT_EQ(77,vector[3]);
}

TEST(vector, size){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();


    ASSERT_EQ(4,vector.size());
}

TEST(vector, capacity){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();


    ASSERT_EQ(5,vector.capacity());
}

TEST(vector, reserve){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();
    vector.reserve(40);


    ASSERT_EQ(40,vector.capacity());
}

TEST(vector, resize){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();
    vector.resize(40);


    ASSERT_EQ(40,vector.size());
}

TEST(vector, clear){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();
    vector.clear();


    ASSERT_EQ(0,vector.capacity());
}


TEST(vector, data){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();
    int *t = vector.data();


    ASSERT_EQ(11,*t);
}

TEST(vector, operator_rowna_sie){

    My_vector<int> vector;

    vector.push_back(11);
    vector.push_back(22);
    vector.push_back(33);
    vector.push_back(44);
    vector.push_back(55);
    vector.pop_back();
    My_vector<int> vec;
    vec = vector;


    ASSERT_EQ(44,vec.back());
}
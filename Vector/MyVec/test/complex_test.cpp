#include <gtest/gtest.h>
#include "../MyVec.h"
#include <vector>

template<typename t>
void EQUAL_VEC ( t*test, const t*ex,int size)
{
    t* test_end = test+size;
    int sum  = 0;
    for (; test<test_end; test++)
    {
        if (*test == *ex)
        {
            sum+=1;
        }
        ex++;
    }
    assert(sum==size);;
}

TEST(VectorTestsInt, Creating) {
    MyVector<int> test(10,1);
    std::vector<int> ex_vec(10,1);
    int*ex = &ex_vec[0];
    EQUAL_VEC(test.GetArr(),ex,test.GetSize());
}

TEST(VectorTestsDouble, Creating) {
    MyVector<double> test(10,2.5);
    std::vector<double> ex_vec(10,2.5);
    double*ex = &ex_vec[0];
    EQUAL_VEC(test.GetArr(),ex,test.GetSize());
}

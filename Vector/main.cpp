#include <iostream>
#include "MyVec/MyVec.h"
using namespace std;

int main()
{
    MyVector<int> a(10,12);
    MyVector<int> b(11);
    b = a.Push_Back(2);
    for (int i = 0; i<b.GetSize(); i++)
    {
        cout<<*b.GetArr()<<endl;
    }
    return 0;
}

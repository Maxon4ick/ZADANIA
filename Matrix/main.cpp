#include <iostream>
#include "Matrix/Matrix.h"
using namespace std;

//* Создани матрицы где существует адресация с помощью скобок, так и арифметика указателей*/
int ** CreateMatr(size_t a, size_t b)
{
    int **m = new int *[a];
    m[0] = new int [a*b];
    for (size_t i=1; i != a; i++)
    {
        m[i] = m[i-1]+b;
    }
    return m;
}

//* Создани матрицы где существует только адресация с помощью скобок */
int **CreateMatrWP (size_t rows, size_t cols)
{
    int **m = new int*[rows];
    for (size_t i = 0; i!= rows; i++)
    {
        m[i] = new int[cols];
    }
    return m;
}
/* Создание перменной на этапе компиляции*/
size_t rows = 3;
size_t cols = 2;
MyMatrix<int> a(rows,cols);

int main()
{
/*создание переменной в рантайме*/
    MyMatrix<int> b(rows,cols,3);

/* Реализацию метода очистки динамической памяти не делал, так как не говорили о ее необходимости
 * хотя он исходя из теории это надо*/

    return 0;
}

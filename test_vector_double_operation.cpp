#include "vector_double_operation.h"
#include "test_vector_double_operation.h"
#include <cassert>
#include <iostream>
#include <vector>
using namespace std;

//ТЕСТ УМНОЖЕНИЯ СТРОКИ НА ЧИСЛО
void TestMultiply()
{
    Row a1;
    a1.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    double k1 = 1.5;
    Row u1 = a1.Multiply(k1);
    assert((u1.row == vector<double> {2.25, 3.75, 5.25, 6.75, 8.25}));
    
    //УМНОЖЕНИЕ НА 0
    Row a2;
    a2.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    double k2 = 0;
    Row u2 = a2.Multiply(k2);
    assert((u2.row == vector<double> {0, 0, 0, 0, 0}));
    
    //УМНОЖЕНИЕ НА 1
    Row a3;
    a3.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    double k3 = 1;
    Row u3 = a3.Multiply(k3);
    assert((u3.row == vector<double> {1.5, 2.5, 3.5, 4.5, 5.5}));
}
   
//ТЕСТЫ СУММЫ   
void TestSumma()
{
    //СЛОЖЕНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
    Row a1;
    a1.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row b1;
    b1.row = {1.5, 2.5, 3.5};
    Row s1 = a1.Summa(b1);
    assert((s1.row == vector<double> {3, 5, 7, 4.5, 5.5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    Row c1;
    c1.row = {1.5, 2.5, 3.5};
    Row d1;
    d1.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row s2 = c1.Summa(d1);
    assert((s2.row == vector<double> {3, 5, 7, 4.5, 5.5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ СТРОКИ РАВНЫЕ
    Row e1;
    e1.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row f1;
    f1.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row s3 = e1.Summa(f1);
    assert((s3.row == vector<double> {3, 5, 7, 9, 11}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА НУЛЕВАЯ
    Row m1;
    Row n1;
    n1.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row s4 = m1.Summa(n1);
    assert((s4.row == vector<double> {1.5, 2.5, 3.5, 4.5, 5.5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ВТОРАЯ СТРОКА НУЛЕВАЯ
    Row h1;
    h1.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row l1;
    Row s5 = h1.Summa(l1);
    assert((s5.row == vector<double> {1.5, 2.5, 3.5, 4.5, 5.5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ОБЕ СТРОКИ НУЛЕВЫЕ
    Row o1;
    Row p1;
    Row s6  = o1.Summa(p1);
    assert((s6.row == vector<double> {}));
    
    //СЛОЖЕНИЕ С НУЛЕМ
    Row r1;
    r1.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row t1;
    t1.row = {0, 0, 0, 0, 0};
    Row s7  = r1.Summa(t1);
    assert((s7.row == vector<double> {1.5, 2.5, 3.5, 4.5, 5.5}));
}
    
 //ТЕСТ ВЫЧИТАНИЯ
 void TestSubtract()
 { 
    //ВЫЧИТАНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
    Row a2;
    a2.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row b2;
    b2.row = {1.5, 2.5, 3.5};
    Row v1 = a2.Substract(b2);
    assert((v1.row == vector<double> {0, 0, 0, 4.5, 5.5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    Row c2;
    c2.row = {1.5, 2.5, 3.5};
    Row d2;
    d2.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row v2 = c2.Substract(d2);
    assert((v2.row == vector<double> {0, 0, 0, -4.5, -5.5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ СТРОКИ РАВНЫ
    Row e2;
    e2.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row f2;
    f2.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row v3 = e2.Substract(f2);
    assert((v3.row == vector<double> {0, 0, 0, 0, 0}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА НУЛЕВАЯ
    Row m2;
    Row n2;
    n2.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row v4 = m2.Substract(n2);
    assert((v4.row == vector<double> {-1.5, -2.5, -3.5, -4.5, -5.5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ВТОРАЯ СТРОКА НУЛЕВАЯ
    Row h2;
    h2.row = {1.5, 2.5, 3.5, 4.5, 5.5};
    Row l2;
    Row v5 = h2.Substract(l2);
    assert((v5.row == vector<double> {1.5, 2.5, 3.5, 4.5, 5.5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ОБЕ СТРОКИ НУЛЕВЫЕ
    Row o2;
    Row p2;
    Row v6  = o2.Substract(p2);
    assert((v6.row == vector<double> {}));
}

#include "vector_double_operation.h"
#include "test_vector_double_operation.h"
#include <iostream>
#include <vector>
using namespace std;

//ТЕСТ УМНОЖЕНИЯ СТРОКИ НА ЧИСЛО
void TestMultiply()
{
    vector <double> a1 = {1.5, 2.5, 3.5, 4.5, 5.5};
    double k1 = 1.5;
    vector <double> u1 = Multiply(a1, k1);
    assert((u1 == vector <double> {2.25, 3.75, 5.25, 6.75, 8.25}));
    
    //УМНОЖЕНИЕ НА 0
    vector <double> a2 = {1.5, 2.5, 3.5, 4.5, 5.5};
    double k2 = 0;
    vector <double> u2 = Multiply(a2, k2);
    assert((u2 == vector <double> {0, 0, 0, 0, 0}));
    
    //УМНОЖЕНИЕ НА 1
    vector <double> a3 = {1.5, 2.5, 3.5, 4.5, 5.5};
    double k3 = 1;
    vector <double> u3 = Multiply(a3, k3);
    assert((u3 == vector <double> {1.5, 2.5, 3.5, 4.5, 5.5}));
}
   
//ТЕСТЫ СУММЫ   
void TestSumma()
{
    //СЛОЖЕНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
    vector <double> a1 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> b1 = {1.5, 2.5, 3.5};
    vector <double> s1 = Summa(a1, b1);
    assert((s1 == vector <double> {3, 5, 7, 4.5, 5.5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    vector <double> c1 = {1.5, 2.5, 3.5};
    vector <double> d1 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> s2 = Summa(c1, d1);
    assert((s2 == vector <double> {3, 5, 7, 4.5, 5.5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ СТРОКИ РАВНЫЕ
    vector <double> e1 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> f1 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> s3 = Summa(e1, f1);
    assert((s3 == vector <double> {3, 5, 7, 9, 11}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА НУЛЕВАЯ
    vector <double> m1;
    vector <double> n1 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> s4 = Summa(m1, n1);
    assert((s4 == vector <double> {1.5, 2.5, 3.5, 4.5, 5.5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ВТОРАЯ СТРОКА НУЛЕВАЯ
    vector <double> h1 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> l1;
    vector <double> s5 = Summa(h1, l1);
    assert((s5 == vector <double> {1.5, 2.5, 3.5, 4.5, 5.5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ОБЕ СТРОКИ НУЛЕВЫЕ
    vector <double> o1;
    vector <double> p1;
    vector <double> s6  = Summa(o1, p1);
    assert((s6 == vector <double> {}));
    
    //СЛОЖЕНИЕ С НУЛЕМ
    vector <double> r1 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> t1 = {0, 0, 0, 0, 0};
    vector <double> s7  = Summa(r1, t1);
    assert((s7 == vector <double> {1.5, 2.5, 3.5, 4.5, 5.5}));
}
    
 //ТЕСТ ВЫЧИТАНИЯ
 void TestSubtract()
 { 
    //ВЫЧИТАНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
    vector <double> a2 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> b2 = {1.5, 2.5, 3.5};
    vector <double> v1 = Subtract(a2, b2);
    assert((v1 == vector <double> {0, 0, 0, 4.5, 5.5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    vector <double> c2 = {1.5, 2.5, 3.5};
    vector <double> d2 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> v2 = Subtract(c2, d2);
    assert((v2 == vector <double> {0, 0, 0, -4.5, -5.5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ СТРОКИ РАВНЫ
    vector <double> e2 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> f2 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> v3 = Subtract(e2, f2);
    assert((v3 == vector <double> {0, 0, 0, 0, 0}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА НУЛЕВАЯ
    vector <double> m2;
    vector <double> n2 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> v4 = Subtract(m2, n2);
    assert((v4 == vector <double> {-1.5, -2.5, -3.5, -4.5, -5.5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ВТОРАЯ СТРОКА НУЛЕВАЯ
    vector <double> h2 = {1.5, 2.5, 3.5, 4.5, 5.5};
    vector <double> l2;
    vector <double> v5 = Subtract(h2, l2);
    assert((v5 == vector <double> {1.5, 2.5, 3.5, 4.5, 5.5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ОБЕ СТРОКИ НУЛЕВЫЕ
    vector <double> o2;
    vector <double> p2;
    vector <double> v6  = Subtract(o2, p2);
    assert((v6 == vector <double> {}));
}

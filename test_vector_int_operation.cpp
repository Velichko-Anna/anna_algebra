#include "vector_int_operation.h"
#include "test_vector_int_operation.h"
#include <iostream>
#include <vector>
using namespace std;

//ТЕСТ УМНОЖЕНИЯ СТРОКИ НА ЧИСЛО
void TestMultiply()
{
    vector <int> a = {1, 2, 3, 4, 5};
    int k = 2;
    vector <int> u = Multiply(a, k);
    assert((u == vector <int> {2, 4, 6, 8, 10}));
}
   
//ТЕСТЫ СУММЫ   
void TestSumma()
{
    //СЛОЖЕНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
    vector <int> a1 = {1, 2, 3, 4, 5};
    vector <int> b1 = {1, 2, 3};
    vector <int> s1 = Summa(a1, b1);
    assert((s1 == vector <int> {2, 4, 6, 4, 5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    vector <int> c1 = {5, 4, 1, 1};
    vector <int> d1 = {1, 2, 3, 4, 5};
    vector <int> s2 = Summa(c1, d1);
    assert((s2 == vector <int> {6, 6, 4, 5, 5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ СТРОКИ РАВНЫЕ
    vector <int> e1 = {5, 4, 1, 4, 5};
    vector <int> f1 = {1, 2, 3, 4, 5};
    vector <int> s3 = Summa(e1, f1);
    assert((s3 == vector <int> {6, 6, 4, 8, 10}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА НУЛЕВАЯ
    vector <int> m1;
    vector <int> n1 = {1, 2, 3, 4, 5};
    vector <int> s4 = Summa(m1, n1);
    assert((s4 == vector <int> {1, 2, 3, 4, 5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ВТОРАЯ СТРОКА НУЛЕВАЯ
    vector <int> h1 = {1, 2, 3, 4, 5};
    vector <int> l1;
    vector <int> s5 = Summa(h1, l1);
    assert((s5 == vector <int> {1, 2, 3, 4, 5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ОБЕ СТРОКИ НУЛЕВЫЕ
    vector <int> o1;
    vector <int> p1;
    vector <int> s6  = Summa(o1, p1);
    assert((s6 == vector <int> {}));
}
    
 //ТЕСТ ВЫЧИТАНИЯ
 void TestSubtract()
 { 
    //ВЫЧИТАНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
    vector <int> a2 = {1, 2, 3, 4, 5};
    vector <int> b2 = {5, 4, 1};
    vector <int> v1 = Subtract(a2, b2);
    assert((v1 == vector <int> {-4, -2, 2, 4, 5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    vector <int> c2 = {5, 4, 1};
    vector <int> d2 = {1, 2, 3, 4, 5};
    vector <int> v2 = Subtract(c2, d2);
    assert((v2 == vector <int> {4, 2, -2, -4, -5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ СТРОКИ РАВНЫ
    vector <int> e2 = {5, 4, 1, 4, 5};
    vector <int> f2 = {1, 2, 3, 4, 5};
    vector <int> v3 = Subtract(e2, f2);
    assert((v3 == vector <int> {4, 2, -2, 0, 0}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА НУЛЕВАЯ
    vector <int> m2;
    vector <int> n2 = {1, 2, 3, 4, 5};
    vector <int> v4 = Subtract(m2, n2);
    assert((v4 == vector <int> {-1, -2, -3, -4, -5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ВТОРАЯ СТРОКА НУЛЕВАЯ
    vector <int> h2 = {1, 2, 3, 4, 5};
    vector <int> l2;
    vector <int> v5 = Subtract(h2, l2);
    assert((v5 == vector <int> {1, 2, 3, 4, 5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ОБЕ СТРОКИ НУЛЕВЫЕ
    vector <int> o2;
    vector <int> p2;
    vector <int> v6  = Subtract(o2, p2);
    assert((v6 == vector <int> {}));
}



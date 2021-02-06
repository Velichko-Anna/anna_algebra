#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//ФУНКЦИЯ УМНОЖЕНИЯ СТРОКИ НА ЧИСЛО
vector <int> YMN(vector <int> A, int k)
{
    int i;
    vector <int> S;
    for (i = 0; i < A.size(); i++)
    {
        S.push_back(A[i] * k);
    }
    return S;
}

//ФУНКЦИЯ СЛОЖЕНИЯ
vector <int> SUMMA(vector <int> A, vector <int> B)
{
    vector <int> S;
    int size = max(A.size(), B.size());
    int i;
    A.resize(B.size(), 0);
    B.resize(A.size(), 0);
    for (i = 0; i < size; i++)
    {
        S[i] = A[i] + B[i];
    }
    
    return S;
}
    
//ФУНКЦИЯ ВЫЧИТАНИЯ
vector <int> VICH(vector <int> A, vector <int> B)
{
    vector <int> U = YMN(B, -1);
    vector <int> V = SUMMA(A, U);
    return V;
}

int main()
{
    
    //УМНОЖЕНИЕ СТРОКИ НА ЧИСЛО
    vector <int> a = {1, 2, 3, 4, 5};
    int k = 2;
    vector <int> u = YMN(a, k);
    assert((u == vector <int> {2, 4, 6, 8, 10}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
    vector <int> a1 = {1, 2, 3, 4, 5};
    vector <int> b1 = {1, 2, 3};
    vector <int> s1 = SUMMA(a1, b1);
    assert((s1 == vector <int> {2, 4, 6, 4, 5}));
    
    /*СЛОЖЕНИЕ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    vector <int> c1 = {5, 4, 1, 1};
    vector <int> d1 = {1, 2, 3, 4, 5};
    vector <int> s2 = SUMMA(c1, d1);
    assert((s2 == vector <int> {6, 6, 4, 5, 5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ СТРОКИ РАВНЫЕ
    vector <int> e1 = {5, 4, 1, 4, 5};
    vector <int> f1 = {1, 2, 3, 4, 5};
    vector <int> s3 = SUMMA(e1, f1);
    assert((s3 == vector <int> {6, 6, 4, 8, 10}));
    
    //СЛОЖЕНИЕ, ЕСЛИ ВТОРАЯ СТРОКА НУЛЕВАЯ
    vector <int> h1;
    vector <int> l1 = {1, 2, 3, 4, 5};
    vector <int> s4 = SUMMA(h1, l1);
    assert((s4 == vector <int> {1, 2, 3, 4, 5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
    vector <int> a2 = {1, 2, 3, 4, 5};
    vector <int> b2 = {5, 4, 1};
    vector <int> v1 = VICH(a2, b2);
    assert((v1 == vector <int> {-4, -2, 2, 4, 5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    vector <int> c2 = {5, 4, 1};
    vector <int> d2 = {1, 2, 3, 4, 5};
    vector <int> v2 = VICH(c2, d2);
    assert((v2 == vector <int> {-4, -2, 2, 4, 5}));
    
    //ВЫЧИТАНИЕ, ЕСЛИ СТРОКИ РАВНЫ
    vector <int> e2 = {5, 4, 1, 4, 5};
    vector <int> f2 = {1, 2, 3, 4, 5};
    vector <int> v3 = VICH(e2, f2);
    assert((v3 == vector <int> {4, 2, -2, 0, 0}));*/
    
   
    return 0;
}

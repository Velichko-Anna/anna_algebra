#include <iostream>
#include <vector>
using namespace std;


//ФУНКЦИЯ УМНОЖЕНИЯ СТРОКИ НА ЧИСЛО
vector <int> YMN(vector <int> A, int k)
{
    int n = A.size(), i;
    vector <int> S;
    for (i = 0; i < n; i++)
    {
        S.push_back(A[i] * k);
    }
    return S;
}


//ФУНКЦИЯ СЛОЖЕНИЯ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕ
vector <int> SUMMA(vector <int> A, vector <int> B)
{
    vector <int> S;
    int n1 = A.size(), n2 = B.size(), i, s;
    if (n1 > n2)
    {
        for (i = n2; i < n1; i++)
            {
                B[i] = 0;
            }
        B.resize(n1);
        for (i = 0; i < n1; i++)
            {
                s = A[i] + B[i];
                S.push_back(s);
            }
    }

//ФУНКЦИЯ СЛОЖЕНИЯ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕ
     if (n2 > n1)
     {
        for (i = n1; i < n2; i++)
            {
                A[i] = 0;
            }
         A.resize(n2);
        for (i = 0; i < n2; i++)
            {
                s = B[i] + A[i];
                S.push_back(s);
            }
      }

//ФУНКЦИЯ СЛОЖЕНИЯ, ЕСЛИ СТРОКИ РАВНЫЕ
    else if (n1 == n2)
    {
    for (i = 0; i < n2; i++)
        {
            s = A[i] + B[i];
            S.push_back(s);
        }
    }
        
    if (A.empty())
    {
        for (i = 0; i < n2; i++)
        {
        S.push_back(B[i]);
        }
    }
    
return S;
}

//ФУНКЦИЯ ВЫЧИТАНИЯ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
vector <int> VICH(vector <int> A, vector <int> B)
{
    vector <int> V;
    int n1 = A.size(), n2 = B.size(), i, k = 2;
    if (n1 > n2)
    {
        vector <int> summ = SUMMA(A, B);
        vector <int> B1 = YMN(B, k);
        for (i = n2; i < n1; i++)
            {
                B1[i] = 0;
            }
        B.resize(n1);
        for (i = 0; i < n1; i++)
        {
            int v = summ[i] - B1[i];
            V.push_back(v);
        }
    }
//ФУНКЦИЯ ВЫЧИТАНИЯ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    else if (n2 > n1)
    {
        vector <int> summ = SUMMA(A, B);
        vector <int> A1 = YMN(A, k);
        for (i = n1; i < n2; i++)
            {
                A1[i] = 0;
            }
        A.resize(n2);
        for (i = 0; i < n2; i++)
        {
            int v = summ[i] - A1[i];
            V.push_back(v);
        }
     }
//ФУНКЦИЯ ВЫЧИТАНИЯ, ЕСЛИ СТРОКИ РАВНЫ
    else
    {
        vector <int> summ = SUMMA(A, B);
        vector <int> B1 = YMN(B, k);
        for (i = 0; i < n1; i++)
        {
            int v = summ[i] - B1[i];
            V.push_back(v);
        }
     }
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
    
    //СЛОЖЕНИЕ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    vector <int> c1 = {5, 4, 1, 1};
    vector <int> d1 = {1, 2, 3, 4, 5};
    vector <int> s2 = SUMMA(c1, d1);
    assert((s2 == vector <int> {6, 6, 4, 5, 5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ СТРОКИ РАВНЫЕ
    vector <int> e1 = {5, 4, 1, 4, 5};
    vector <int> f1 = {1, 2, 3, 4, 5};
    vector <int> s3 = SUMMA(e1, f1);
    assert((s3 == vector <int> {6, 6, 4, 8, 10}));
    
    /*СЛОЖЕНИЕ, ЕСЛИ ВТОРАЯ СТРОКА НУЛЕВАЯ
    vector <int> h1 = {};
    vector <int> l1 = {1, 2, 3, 4, 5};
    vector <int> s4 = SUMMA(h1, l1);
    assert((s4 == vector <int> {1, 2, 3, 4, 5}));*/
    
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
    assert((v3 == vector <int> {4, 2, -2, 0, 0}));
    
   
    return 0;
}

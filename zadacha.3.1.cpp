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
        for (i = n1 - n2 + 1; i < n1; i++)
            {
                B[i] = 0;
            }
        for (i = 0; i < n1; i++)
            {
                s = A[i] + B[i];
                S.push_back(s);
            }
    }

//ФУНКЦИЯ СЛОЖЕНИЯ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕ
      else if (n2 > n1)
     {
        for (i = n2 - n1 + 1; i < n2; i++)
            {
                A[i] = 0;
            }
        for (i = 0; i < n2; i++)
            {
                s = B[i] + A[i];
                S.push_back(s);
            }
      }

//ФУНКЦИЯ СЛОЖЕНИЯ, ЕСЛИ СТРОКИ РАВНЫЕ
    else
    {
    for (i = 0; i < n2; i++)
        {
            s = A[i] + B[i];
            S.push_back(s);
        }
    }
return S;
}

//ФУНКЦИЯ ВЫЧИТАНИЯ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
void VICH(vector <int> A, vector <int> B)
{
    vector <int> V;
    int n1 = A.size(), n2 = B.size(), i, k = 2;
    if (n1 > n2)
    {
        vector <int> summ = SUMMA(A, B);
        vector <int> B1 = YMN(B, k);
        for (i = n1 - n2; i < n1; i++)
            {
                B1[i] = 0;
            }
        for (i = 0; i < n1; i++)
        {
            int v = summ[i] - B1[i];
            V.push_back(v);
            cout << V[i] << " ";
        }
    }
//ФУНКЦИЯ ВЫЧИТАНИЯ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    else if (n2 > n1)
    {
        vector <int> summ = SUMMA(A, B);
        vector <int> A1 = YMN(A, k);
        for (i = n2 - n1; i < n2; i++)
            {
                A1[i] = 0;
            }
        for (i = 0; i < n2; i++)
        {
            int v = summ[i] - A1[i];
            V.push_back(v);
            cout << V[i] << " ";
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
            cout << V[i] << " ";
        }
     }
}
    


int main()
{
    
    //СЛОЖЕНИЕ, ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
    vector <int> a = {1, 2, 3, 4, 5};
    vector <int> b = {5, 4, 1};
    vector <int> s1 = SUMMA(a, b);
    assert((s1 == vector <int> {6, 6, 4, 4, 5}));

    //СЛОЖЕНИЕ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
    vector <int> c = {5, 4, 1};
    vector <int> d = {1, 2, 3, 4, 5};
    vector <int> s2 = SUMMA(c, d);
    assert((s2 == vector <int> {6, 6, 4, 4, 5}));
    
    //СЛОЖЕНИЕ, ЕСЛИ СТРОКИ РАВНЫЕ
    vector <int> e = {5, 4, 1, 4, 5};
    vector <int> f = {1, 2, 3, 4, 5};
    vector <int> s3 = SUMMA(e, f);
    assert((s3 == vector <int> {6, 6, 4, 8, 10}));
    
    return 0;
}

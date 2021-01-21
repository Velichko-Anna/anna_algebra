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
        for (i = 0; i < n2; i++)
            {
                s = A[i] + B[i];
                S.push_back(s);
            }
    }

//ФУНКЦИЯ СЛОЖЕНИЯ, ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕ
     else if (n2 > n1)
     {
        for (i = 0; i < n1; i++)
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
vector <int> VICH(vector <int> A, vector <int> B)
{
    vector <int> V;
    int n1 = A.size(), n2 = B.size(), i, k = 2;
    if (n1 > n2)
    {
        vector <int> summ = SUMMA(A, B);
        vector <int> B1 = YMN(B, k);
        for (i = 0; i < n2; i++)
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
        for (i = 0; i < n1; i++)
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
    vector <int> a = {1, 2, 3, 4, 5};
    vector <int> b = {5, 4, 1};
    vector <int> s = VICH(a, b);
    assert((s == vector <int> {-4, -2, 2}));
    
    return 0;
}


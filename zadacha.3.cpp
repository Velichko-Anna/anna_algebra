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
        for (i = n1 - n2; i < n1; i++)
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
        for (i = n2 - n1; i < n2; i++)
            {
                B[i] = 0;
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
    //ВВОД СТРОКИ
    cout << "Введите количество элементов строки: ";
    int n1, i;
    vector <int> A, S;
    cin >> n1;
    
    for (i = 0; i < n1; i++)
    {
        cout << "Введите " << i + 1 << " элемент строки ";
        int a;
        cin >> a;
        A.push_back(a);
    }
    
    cout << "Введенная строка: ";
    for (i = 0; i < n1; i++)
    {
        cout << A[i] << " ";
    }
    cout << " \n";
    
    //УМНОЖЕНИЕ НА ЧИСЛО
    cout << "Введите число, на которое нужно умножить строку ";
    int k;
    cin >> k;
    vector <int> Y = YMN(A, k);
    for (i = 0; i < n1; i++)
    {
        cout << Y[i] << " ";
    }
    cout << " \n";
    
    //ВВОД ВТОРОЙ СТРОКИ
    cout << "Введите количество элементов второй строки: ";
    int n2;
    vector <int> B;
    cin >> n2;
    
    for (i = 0; i < n2; i++)
    {
        cout << "Введите " << i + 1 << " элемент строки ";
        int b;
        cin >> b;
        B.push_back(b);
    }
    
    cout << "Введенная строка: ";
    for (i = 0; i < n2; i++)
    {
        cout << B[i] << " ";
    }
    cout << " \n";
    
    //СЛОЖЕНИЕ
    vector <int> summ = SUMMA(A, B);
    cout << "Сумма строк ";
    int n3 = summ.size();
    for (i = 0; i < n3; i++)
    {
        cout << summ[i] << " ";
    }
    cout << " \n";
    

    
    //ВЫЧИТАНИЕ
    
    cout << "Разность строк ";
    VICH(A, B);
    
    
    return 0;
}

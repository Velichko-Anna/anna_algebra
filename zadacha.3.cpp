#include <vector>
#include <iostream>
using namespace std;

//ФУНКЦИЯ УМНОЖЕНИЯ СТРОКИ НА ЧИСЛО
vector <int> YMN(vector <int> X, int n)
{
cout << "Введите число, на которое умножим строку ";
    int k, i;
    cin >> k;
    cout << "Умноженная на число строка: ";
    for (i = 0; i < n; i++)
    {
        cout << X[i] * k << " ";
    }
    cout << " \n";
    return X;
}

//ФУНКЦИЯ СЛОЖЕНИЯ СТРОК
vector <int> SLOZ(vector <int> A, vector <int> B, int n1, int n2)
{
    vector <int> S, V;
    if (n1 > n2)
    {
        //СЛОЖЕНИЕ ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
        int s, i;
        for (i = n1 - n2 + 1; i < n1; i++)
        {
            B[i] = 0;
        }
        for (i = 0; i < n1; i++)
        {
            s = A[i] + B[i];
            S.push_back(s);
        }
        //ВЫВОД СУММЫ
        cout << "Сумма двух строк: ";
        for (i = 0; i < n1; i++)
        {
            cout << S[i] << " ";
        }
        cout << " \n";
        //ВЫЧИТАНИЕ ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
        int v;
        for (i = n1 - n2 + 1; i < n1; i++)
        {
            B[i] = 0;
        }
        for (i = 0; i < n1; i++)
        {
            v = A[i] - B[i];
            V.push_back(v);
        }
        //ВЫВОД РАЗНОСТИ
        cout << "Разность двух строк: ";
        for (i = 0; i < n1; i++)
        {
            cout << V[i] << " ";
        }
        cout << " \n";
    }
    if (n1 < n2)
    {
        //СЛОЖЕНИЕ ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
        int s, i;
        for (i = n2 - n1 + 1; i <= n2; i++)
        {
            A[i] = 0;
        }
        for (i = 0; i < n2; i++)
        {
            s = B[i] + A[i];
            S.push_back(s);
        }
        //ВЫВОД СУММЫ
        cout << "Сумма двух строк: ";
        for (i = 0; i < n2; i++)
         {
            cout << S[i] << " ";
         }
        cout << " \n";
        //ВЫЧИТАНИЕ ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
        int v;
        for (i = n2 - n1 + 1; i <= n2; i++)
        {
            A[i] = 0;
        }
        for (i = 0; i < n2; i++)
        {
            v = B[i] - A[i];
            V.push_back(v);
        }
        //ВЫВОД РАЗНОСТИ
        cout << "Разность двух строк: ";
        for (i = 0; i < n2; i++)
        {
            cout << V[i] << " ";
        }
        cout << " \n";
    }
    else
    {
        //CУММА РАВНЫХ ПО ДЛИНЕ СТРОК
        int s, i;
        for (i = 0; i < n1; i++)
        {
            s = A[i] + B[i];
            S.push_back(s);
        }
        cout << "Сумма двух строк: ";
        for (i = 0; i < n2; i++)
        {
            cout << S[i] << " ";
        }
        cout << " \n";
        //РАЗНОСТЬ РАНВЫХ ПО ДЛИНЕ СТРОК
        int v;
        for (i = 0; i < n1; i++)
        {
            v = B[i] - A[i];
            V.push_back(v);
        }
        //ВЫВОД РАЗНОСТИ
        cout << "Разность двух строк: ";
        for (i = 0; i < n2; i++)
        {
            cout << V[i] << " ";
        }
        cout << " \n";
    }
    return(S, V);
}
    
int main()
{
    //ВВОД СТРОКИ
    cout << "Введите количество элементов строки ";
    int n1, i, a;
    vector <int> A;
    cin >> n1;
    for (i = 0; i < n1; i++)
    {
        cout << "Введите элемент строки ";
        cin >> a;
        A.push_back(a);
    }
    cout << "Введенная строка: ";
        for (i = 0; i < n1; i++)
        {
            cout << A[i] << " ";
        }
        
        cout << " \n";
    
    YMN(A, n1);

    
    //ВВОД ВТОРОЙ СТРОКИ
    cout << "Введите количество элементов второй строки ";
    int n2, b;
    vector <int> B;
    cin >> n2;
    for (i = 0; i < n2; i++)
    {
        cout << "Введите элемент строки ";
        cin >> b;
        B.push_back(b);
    }
    cout << "Введенная строка: ";
        for (i = 0; i < n2; i++)
        {
            cout << B[i] << " ";
        }
        
        cout << " \n";
    
    //СЛОЖЕНИЕ И ВЫЧИТАНИЕ СТРОК
    SLOZ(A, B, n1, n2);
    
    return 0;
}

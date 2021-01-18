#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //ВВОД ПЕРВОЙ СТРОКИ
    cout << "Какова длина первой строки? ";
    int n1, i, a;
    cin >> n1;
    vector <int> A;
    
    for (i = 0; i < n1; i++)
    {
        cout << "Введите элемент первой строки ";
        cin >> a;
        A.push_back(a);
    }
    
    cout << "Первая строка: ";
    for (i = 0; i < n1; i++)
    {
        cout << A[i] << " ";
    }
    
    cout << " \n";
    
    //ВВОД ВТОРОЙ СТРОКИ
    cout << "Какова длина второй строки? ";
    int n2, b;
    cin >> n2;
    vector <int> B;
    
    for (i = 0; i < n2; i++)
    {
        cout << "Введите элемент второй строки ";
        cin >> b;
        B.push_back(b);
    }
    
    cout << "Вторая строка: ";
    for (i = 0; i < n2; i++)
    {
        cout << B[i] << " ";
    }
    
    cout << " \n";
    
    if (n1 > n2)
    {
        //СЛОЖЕНИЕ ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
        vector <int> S;
        int s;
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
        //ВЫЧИТАНИЕ ЕСЛИ ПЕРВАЯ СТРОКА ДЛИННЕЕ
        vector <int> V;
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
        }    }
    if (n1 < n2)
    {
        //СЛОЖЕНИЕ ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
        vector <int> S;
        int s;
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
        //ВЫЧИТАНИЕ ЕСЛИ ВТОРАЯ СТРОКА ДЛИННЕЕ
        vector <int> V;
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
    }
    else
    {
        //CУММА РАВНЫХ ПО ДЛИНЕ СТРОК
        vector <int> S;
        int s;
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
        //РАЗНОСТЬ РАНВЫХ ПО ДЛИНЕ СТРОК
        vector <int> V;
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
    }

    
    return 0;
}


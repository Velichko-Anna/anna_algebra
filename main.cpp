# anna_algebra
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    cout << "Введите число, на которое умножим строку ";
    int k, n, i, b;
    cin >> k;
    vector <int> a;
    cout << "Сколько в строке элементов? ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Введите элемент строки ";
        cin >> b;
        a.push_back(b * k);
    }
    cout << "Умноженная строка: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

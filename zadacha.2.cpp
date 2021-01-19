#include <iostream>
#include <vector>
using namespace std;

vector <int> VYVOD(vector <int> X)
{
    for (auto now : X)
    {
        cout << now << " ";
    }
    return X;
}

int main()
{
    //ВВОД СТРОКИ
    cout << "Сколько элементов в строке? ";
    int n, i;
    vector <int> A;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        int a;
        cout << "Введите элемент строки: ";
        cin >> a;
        A.push_back(a);
    }
    
    VYVOD(A);
    cout << " \n";
    
    return 0;
}


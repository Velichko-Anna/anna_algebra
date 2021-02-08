#include "print.h"
#include <iostream>

using namespace std;

void PRINT(vector <int> X)
{
    cout << "(";
    for (int i = 0, n = X.size(); i < n; i++)
    {
        if (i < n - 1)
        {
            cout << X[i] << "," << " ";
        }
        else if (i == n - 1)
        {
            cout << X[i];
        }
    }
    cout << ")";
}



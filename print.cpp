#include <iostream>
#include <vector>
#include "print.h"
using namespace std;

vector <int> PRINT(vector <int> X)
{
    int i, n = X.size();
    cout << "(";
    for (i = 0; i < n; i++)
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
    return X;
}


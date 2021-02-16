#include "print.h"
#include <iostream>
#include <vector>
using namespace std;

void Print(vector <int> x)
{
    cout << "(";
    for (int i = 0, n = x.size(); i < n; i++)
    {
        if (i < n - 1)
        {
            cout << x[i] << "," << " ";
        }
        else if (i == n - 1)
        {
            cout << x[i];
        }
    }
    cout << ")";
    return;
}



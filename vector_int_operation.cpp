#include <iostream>
#include "vector_int_operation.h"
#include <vector>
#include <algorithm>

using namespace std;


//ФУНКЦИЯ УМНОЖЕНИЯ СТРОКИ НА ЧИСЛО
vector <int> Multiply(vector <int> a, int k)
{
    int i;
    vector <int> s;
    for (i = 0; i < a.size(); i++)
    {
        s.push_back(a[i] * k);
    }
    return s;
}

//ФУНКЦИЯ СЛОЖЕНИЯ
vector <int> Summa(vector <int> a, vector <int> b)
{ 
    int size = max(a.size(), b.size()), i; 
	vector <int> s(size, 0);
    a.resize(size, 0);
    b.resize(size, 0);
    for (i = 0; i < size; i++)
    {
        s[i] = a[i] + b[i];
    }
    
    return s;
}
    
//ФУНКЦИЯ ВЫЧИТАНИЯ
vector <int> Subtract(vector <int> a, vector <int> b)
{
    vector <int> u = Multiply(b, -1);
    vector <int> v = Summa(a, u);
    return v;
}



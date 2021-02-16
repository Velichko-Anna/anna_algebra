#include <iostream>
#include "print.h"
#include "vector_double_operation.h"
#include <vector>
#include <algorithm>

using namespace std;


//ФУНКЦИЯ УМНОЖЕНИЯ СТРОКИ НА ЧИСЛО
vector <double> Multiply(vector <double> a, double k)
{
    int i;
    vector <double> s;
    for (i = 0; i < a.size(); i++) 
    {
        s.push_back(a[i] * k);
    }
    return s;
}

//ФУНКЦИЯ СЛОЖЕНИЯ
vector <double> Summa(vector <double> a, vector <double> b)
{ 
    double size = max(a.size(), b.size());
	int i; 
	vector <double> s(size, 0);
    a.resize(size, 0);
    b.resize(size, 0);
    for (i = 0; i < size; i++)
    {
        s[i] = a[i] + b[i];
    }
    
    return s;
}
    
//ФУНКЦИЯ ВЫЧИТАНИЯ
vector <double> Subtract(vector <double> a, vector <double> b)
{
    vector <double> u = Multiply(b, -1);
    vector <double> v = Summa(a, u);
    return v;
}

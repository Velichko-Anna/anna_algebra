#include <iostream>
#include "print.h"
#include "vector_double_operation.h"
#include <vector>
#include <algorithm>

using namespace std;

//реализация методов структуры Row
int Row::size()
{
  return row.size();
}

//ФУНКЦИЯ УМНОЖЕНИЯ СТРОКИ НА ЧИСЛО
Row Row::Multiply(double k)
{
    Row s;
    for (int i = 0; i < size(); i++) 
    {
        s.row.push_back(row[i] * k);
    }
    return s;
}

//ФУНКЦИЯ СЛОЖЕНИЯ
Row Row::Summa(Row b)
{ 
    int maxSize = max(size(), b.size());
    Row s;
    s.row = vector<double>(maxSize, 0);
    row.resize(maxSize, 0);
    b.row.resize(maxSize, 0);
    for (int i = 0; i < maxSize; i++)
    {
        s.row[i] = row[i] + b.row[i];
    }
    
    return s;
}
    
//ФУНКЦИЯ ВЫЧИТАНИЯ
Row Row::Substract(Row b)
{
    Row u = b.Multiply(-1.);
    Row v = Summa(u);
    return v;
}

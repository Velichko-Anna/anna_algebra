#include "vector_double_operation.h"
#include "matrix.h"
#include <iostream>
#include <vector>

using namespace std;

//УМНОЖЕНИЕ СТРОКИ МАТРИЦЫ
vector < vector <double> > MatrixMultiply(vector < vector <double> > matrix, int index, double k)
{
  vector < vector <double> > result(matrix.size());
  for (int i = 0; i < matrix.size(); i++)
  {
    if (i == index)
    {
      result[i] = Multiply(matrix[i], k);
    }
    else
    {
      result[i] = matrix[i];
    }
  }
  return result;
}

//СЛОЖЕНИЕ СТРОК МАТРИЦЫ
vector < vector <double> > MatrixSumma(vector <vector <double>> matrix, int index, vector <double> line)
{
  vector <vector <double>> result(matrix.size());
  for (int i = 0; i < matrix.size(); i++)
  {
    if (i == index)
    {
        result[i] = Summa(matrix[index], line);
    }
    else
    {
        result[i] = matrix[i];
    }
  }
  return result;
}

//РАЗНОСТЬ СТРОК МАТРИЦЫ
vector <vector <double>> MatrixSubtract(vector <vector <double>> matrix, int index, vector <double> line)
{
  vector <vector <double>> result(matrix.size());
  for (int i = 0; i < matrix.size(); i++)
  {
    if (i == index)
    {
        result[i] = Subtract(matrix[index], line);
    }
    else
    {
        result[i] = matrix[i];
    }
  }
  return result;
}

//ПЕРЕСТАНОВКА СТРОК
vector <vector <double>> MatrixChange(vector <vector <double>> matrix, int index1, int index2)
{
    vector <vector <double>> result(matrix.size());
    for (int i = 0; i < matrix.size(); i++)
    {
      if ((i != index1) && (i != index2))
      {
          result[i] = matrix[i];
      }
      else
      {
          vector <double> change = matrix[index1];
          matrix[index1] = matrix[index2];
          matrix[index2] = change; 
      }
    }
    return result;
    
}

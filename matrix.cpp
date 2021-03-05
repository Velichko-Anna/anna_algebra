#include "vector_double_operation.h
#include <iostream>
#include <vector>

using namespace std;

vector < vector <double> > MatrixMultiply(vector <vector <double> matrix, double k)
{
  vector < vector <double> > result(matrix.size);
  for (int i = 1; i < matrix.size; i++)
  {
    result[i] = Multiply(matrix[i], k);
  }
  return result;
}

vector < vector <double> > MatrixSumma(vector <vector <double> matrix1, vector <vector <double> matrix2)
{
  vector < vector <double> > result(matrix1.size);
  for (int i = 1; i < matrix1.size; i++)
  {
    result[i] = Summa(matrix1[i], matrix2[i]);
  }
  return result;
}

vector < vector <double> > MatrixSubstract(vector <vector <double> matrix1, vector <vector <double> matrix2)
{
  vector < vector <double> > result(matrix1.size);
  for (int i = 1; i < matrix1.size; i++)
  {
    result[i] = Substract(matrix1[i], matrix2[i]);
  }
  return result;
}

vector < vector <double> > MatrixMultipy1(vector <vector <double> matrix, int index, double k)
{
  vector < vector <double> > result(matrix.size);
  for (int i = 1; i < matrix.size; i++)
  {
    if (i = index)
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

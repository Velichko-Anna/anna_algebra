#ifndef TEST_H
#define TEST_H

#include <vector>
using namespace std;

//УМНОЖЕНИЕ СТРОКИ МАТРИЦЫ
vector <vector <double>> MatrixMultiply(vector <vector <double>> matrix, int ind, double k);

//СЛОЖЕНИЕ СТРОК МАТРИЦЫ
vector <vector <double>> MatrixSumma(vector <vector <double>> matrix, int index, vector <double> line);

//РАЗНОСТЬ СТРОК МАТРИЦЫ
vector <vector <double>> MatrixSubtract(vector <vector <double>> matrix, int index, vector <double> line);

//ПЕРЕСТАНОВКА СТРОК
vector <vector <double>> MatrixChange(vector <vector <double>> matrix, int index1, int index2);


#endif

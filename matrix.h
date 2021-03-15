#ifndef TEST_H
#define TEST_H

#include <vector>
using namespace std;

vector < vector <double> > MatrixMultiply(vector < vector <double> > matrix, int ind, double k);
vector < vector <double> > MatrixSumma(vector < vector <double> > matrix, int index1, int index2);
vector < vector <double> > MatrixSubtract(vector < vector <double> > matrix, int index1, int index2);
vector < vector <double> > MatrixChange(vector < vector <double> > matrix, int index1, int index2);


#endif

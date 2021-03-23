#ifndef TEST_H
#define TEST_H

#include <vector>



struct Row
{
  //members
  std::vector <double> row;

  //methods
  int size();
  Row Multiply(double k); 
  Row Summa(Row b);
  Row Substract(Row b); 
};

  //Row Multiply(Row a, double k);
  //Row Summa(Row a, Row b);
  //Row Subtract(Row a, Row b);

#endif

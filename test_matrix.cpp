#include "matrix.h"
#include <vector>
#include "test_matrix.h"

using namespace std;



//ТЕСТ УМНОЖЕНИЯ СТРОКИ МАТРИЦЫ
void TestMultiplyMatrix()
{
    //УМНОЖЕНИЕ ВТОРОЙ СТРОКИ НА 2
    vector <vector <double>> matrix1 = {{1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}};
    int index1 = 1;
    double k1 = 2;
    vector <vector <double>> result1 =  MatrixMultiply(matrix1, index1, k1);
    assert((result1 == vector <vector <double>> {{1.1, 2.2, 3.3}, {2.2, 4.4, 6.6}, {1.1, 2.2, 3.3}}));
    
    //УМНОЖЕНИЕ ПЕРВОЙ СТРОКИ НА 2
    vector <vector <double>> matrix11 = {{1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}};
    int index11 = 0;
    double k11 = 2;
    vector <vector <double>> result11 =  MatrixMultiply(matrix11, index11, k11);
    assert((result11 == vector <vector <double>> {{2.2, 4.4, 6.6}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}}));
     
     
    //УМНОЖЕНИЕ ВТОРОЙ СТРОКИ НА НОЛЬ
    vector <vector <double>> matrix2 = {{1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}};
    int index2 = 1;
    double k2 = 0;
    vector <vector <double>> result2 =  MatrixMultiply(matrix2, index2, k2);
    assert((result2 == vector <vector <double>> {{1.1, 2.2, 3.3}, {0, 0, 0}, {1.1, 2.2, 3.3}}));
    
    //УМНОЖЕНИЕ ВТОРОЙ СТРОКИ НА ЕДИНИЦУ
    vector <vector <double>> matrix3 = {{1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}};
    int index3 = 1;
    double k3 = 1;
    vector <vector <double>> result3 =  MatrixMultiply(matrix3, index3, k3);
    assert((result3 == vector <vector <double>> {{1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}}));
}

//ТЕСТЫ СУММЫ
void TestSummaMatrix()
{
    //CЛОЖЕНИЕ ВТОРОЙ СТРОКИ С LINE
    vector <vector <double>> matrix4 = {{1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}};
    vector <double> line4 = {1.1, 2.2, 3.3};
    int index4 = 1;
    vector <vector <double>> result4 = MatrixSumma(matrix4, index4, line4);
    assert((result4 == vector <vector<double>> {{1.1, 2.2, 3.3}, {2.2, 4.4, 6.6}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}})).
    
    //СЛОЖЕНИЕ ВТОРОЙ И ТРЕТЬЕЙ СТРОКИ (ТРЕТЬЯ НУЛЕВАЯ)
    vector < vector <double> > matrix5 = {{1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}};
    vector <double> line5 = {0, 0, 0};
    int index5 = 1;
    vector < vector <double> > result5 = MatrixSumma(matrix5, index5, line5);
    assert((result5 == vector < vector <double> > { {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3} } ));
}
    
    /*СЛОЖЕНИЕ ВТОРОЙ И ТРЕТЬЕЙ СТРОКИ (ВТОРАЯ НУЛЕВАЯ)
    vector < vector <double> > matrix6 = { {1.1, 2.2, 3.3}, {0, 0, 0}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3} };
    vector < vector <double> > result6 = MatrixSumma(matrix6, 2, 3);
    assert((result6 == vector < vector <double> > { {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3} } ));
    
    //СЛОЖЕНИЕ ПЕРВОЙ И ЧЕТВЕРТОЙ СТРОКИ
    vector < vector <double> > matrix7 = { {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3} };
    vector < vector <double> > result7 = MatrixSumma(matrix7, 1, 4);
    assert((result7 == vector < vector <double> > { {2.2, 4.4, 6.6}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3} } ));
}

//ТЕСТЫ РАЗНОСТИ
void TestSubtractMatrix()
{
    //РАЗНОСТЬ ВТОРОЙ И ТРЕТЬЕЙ СТРОКИ
    vector < vector <double> > matrix8 = { {1.1, 2.2, 3.3}, {2.2, 4.4, 6.6}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3} };
    vector < vector <double> > result8 = MatrixSubtract(matrix8, 2, 3);
    assert((result8 == vector < vector <double> > { {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3} } ));
}

//ТЕСТ ЕРЕСТАНОВКА СТРОК
void TestChangeMatrix()
{
    //ПЕРЕСТАНОВКА ВТОРОЙ И ТРЕТЬЕЙ СТРОКИ
    vector < vector <double> > matrix9 = { {1.1, 2.2, 3.3}, {2.2, 4.4, 6,6}, {1, 2, 3}, {1.1, 2.2, 3.3} };
    vector < vector <double> > result9 = MatrixChange(matrix9, 2, 3);
    assert((result9 == vector < vector <double> > { {1.1, 2.2, 3.3}, {1, 2, 3}, {2.2, 4.4, 6.6}, {1.1, 2.2, 3.3} } ));
    
    //ПЕРЕСТАНОВКА ПЕРВОЙ И ЧЕТВЕРТОЙ СТРОКИ
    vector < vector <double> > matrix10 = { {2.2, 4.4, 6.6}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {1, 2, 3} };
    vector < vector <double> > result10 = MatrixChange(matrix10, 1, 4);
    assert((result10 == vector < vector <double> > { {1, 2, 3}, {1.1, 2.2, 3.3}, {1.1, 2.2, 3.3}, {2.2, 4.4, 6.6} } ));
}*/



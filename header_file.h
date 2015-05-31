
/**
 *25. Дана матрица A из N строк и N столбцов. Если разность максимального и минимального
элементов каждой строки матрицы А не превышает заданной величины R, присвоить каждому из
элементов С1, С2, ..., СN значение соответствующего по номеру элемента главной диагонали матрицы
А.
*/
#ifndef LABA6_VAR25_HEADER_FILE_H
#define LABA6_VAR25_HEADER_FILE_H

#include <iostream>
#include <c++/fstream>
#include <c++/iomanip>

using namespace std;

void  Input(int n, int **A, ifstream& input_file) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            input_file >> A[i][j];
        }
    }
}

void InputedMatrix(int n,int **A, ofstream& output_file )
{

    output_file << "\nInputed Matrix" << endl;
    for (int i = 0; i < n; i++) {
        output_file << endl;
        for (int j = 0; j < n; j++) {
            output_file << setw(5) << A[i][j];

        }
    }
}

int Subtraction(int n, int **A)
{
    int max =  A[0][0];
    int min = A[0][0];
    int result;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(A[i][j]>max)
            {
                max = A[i][j];
            }
            if(A[i][j]< min)
            {
                min = A[i][j];
            }
        }
    }
    result = max -min;
    return result;
}

void NewMas(int n, int **A, ifstream& input_file, ofstream& output_file)
{
    int *C = new int[n];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==j) {
                C[i]= A[i][j];
            }
            }
    }

    output_file << "\n\nNew Massiv " << endl;

    for (int i = 0; i < n; i++) {
            output_file << setw(5) << C[i] << endl;
        }

    delete[] C;
}
#endif //LABA6_VAR25_HEADER_FILE_H

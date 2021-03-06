#include <iostream>
#include <c++/fstream>
#include <c++/iomanip>
#include "header_file.h"

using namespace std;

int main() {
    int n, R;

    cout << "Hello, Maaaan!" << endl;


    char in[80];
    cout << "Enter input file name " << endl;
    gets(in);
    ifstream input_file(in);

    char out[80];
    cout << "Enter output file name " << endl;
    gets(out);
    ofstream output_file(out);


    input_file >> n;
    if (n < 2) {
        cout << "Matrix size MUST BE > or = 2" << endl;
        exit(1);
    }
    output_file << n << "  numbers of lines" << endl;
    output_file << n << "  numbers of colomns" << endl;

    input_file >> R;
    output_file << R  << " -  R value" << endl;



    int **A = new int *[n];
    for(int k=0; k<n; k++)
    {
        A[k] = new int[n];
    }

    Input(n,A,input_file);
    InputedMatrix(n,A,output_file);
    output_file<<endl;

    if( R >= Subtraction(n,A))
    {
        NewMas(n,A,input_file,output_file);
    }
    else
    {
        output_file << "R value < Subtraction of max and min" << endl;
    }

    input_file.close();
    output_file.close();

    for (int k = 0; k < n; k++) {
        delete[] A[k];
    }
    delete[] A;

    return 0;
}
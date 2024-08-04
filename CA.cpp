#include<bits/stdc++.h>
using namespace std;

void inputMatrix(int matrix[3][3], const string &name) 
{
    cout << "Enter elements of matrix " << name << "\n";
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cin >> matrix[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; ++k) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void printMatrix(int matrix[3][3], const string &name) 
{
    cout << "Matrix " << name << ":\n";
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int matrix1[3][3], matrix2[3][3], result[3][3];

    inputMatrix(matrix1, "A");
    inputMatrix(matrix2, "B");

    multiplyMatrices(matrix1, matrix2, result);

    printMatrix(matrix1, "A");
    printMatrix(matrix2, "B");
    printMatrix(result, "Result");

    return 0;
}

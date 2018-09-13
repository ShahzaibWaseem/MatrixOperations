// This is the main DLL file.

#include "stdafx.h"
#include "MatrixLib.h"
#include "MatrixMultiplication.cpp"
#include "MatrixAddSub.cpp"
#include "MatrixInverse.cpp"

using namespace std;
void printMatrix (vector<vector<double>> matrix, int matrixRow, int matrixCol);

int main(int argc, char const *argv[]){
	vector<vector<double>> matrix1, matrix2;
	int matrix1Row, matrix1Col, matrix2Row, matrix2Col, op;
	cout << "Input the Number of Rows and Columns for Matrix 1: ";
	cin >> matrix1Row;
	cin >> matrix1Col;

	for (int i = 0; i < matrix1Row; ++i){
		for (int j= 0; j < matrix1Col; ++j){
			cout << "Give me the Number : " << i << " x " << j << " of the Matrix 1 :";
			cin >> matrix1[i][j];
		}
	}

	cout << "Input the Number of Rows and Columns for Matrix 2: ";
	cin >> matrix2Row;
	cin >> matrix2Col;

	for (int i = 0; i < matrix2Row; ++i){
		for (int j= 0; j < matrix2Col; ++j){
			cout << "Give me the Number : " << i << " x " << j << " of the Matrix 2 :";
			cin >> matrix2[i][j];
		}
	}

	cout << "What do you want to do? \n 1--Matrix Addition \n 2--Matrix Subtraction \n 3--Matrix Multiplication \n 4--Matrix Transpose\n";
	cin >> op;

	if (op == 1) {
		cout << "add";
		addition(matrix1, matrix1Row, matrix1Col, matrix2, matrix2Row, matrix2Col);
	}
	else if (op == 2) {
		cout << "sub";
		subtraction(matrix1, matrix1Row, matrix1Col, matrix2, matrix2Row, matrix2Col);
	}
	else if (op == 3) {
		cout << "mul";
		MatrixMul(matrix1, matrix1Row, matrix1Col, matrix2, matrix2Row, matrix2Col);
	}
	else if (op == 4) {
		cout << "trans";
		tr_main();
	}
	else
		cout << "Enter valid option";

	return 0;
}

void printMatrix (vector<vector<double>> matrix, int matrixRow, int matrixCol) {
	for (int i = 0; i < matrixRow; ++i){
		for (int j = 0; j < matrixCol; ++j){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
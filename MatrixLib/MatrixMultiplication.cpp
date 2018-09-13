vector <vector<double>> MatrixMul (vector <vector <double>> matrix1, int matrix1Row, int matrix1Col, vector<vect<double>> matrix2, int matrix2Row, int matrix2Col) {
	if (matrix1Row == matrix2Col){
		vector <vector<double>> FinalMatrix;
		double tempNumber = 0;
		for (int i = 0; i < matrix1Row; ++i){
			for (int j = 0; j < matrix1Col; ++j){
				for (int k = 0; k < matrix2Col; ++k){
					tempNumber += matrix1[i][j] * matrix2[j][k];
					if (k == matrix2Col - 1){
						FinalMatrix[i][k] = tempNumber;
					}
				}
			}
		}
	}
	return FinalMatrix;
}
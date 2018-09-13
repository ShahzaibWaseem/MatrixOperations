vector <vector<double>> addition(vector<vector<double>>matrix1, int n, int m, vector<vector<double>>matrix2, int a, int b){
	vector <vector<double>> finalmatrix;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			finalmatrix[i][j] = matrix1[i][j];
		}
	}
	if (n == a && m == b){
	for (int i = 0; i < a; ++i){
		for (int j = 0; j < b; ++j){
			finalmatrix[a][b] += matrix2[a][b];
			}
		}
	}
	else{
		cout << "Enter correct dimensions.";
	}
}

vector <vector<double>> substraction(vector<vector<double>>matrix1, int n, int m, vector<vector<double>>matrix2, int a, int b){
	vector <vector<double>> finalmatrix;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			finalmatrix[i][j] = matrix1[i][j];
		}
	}
	if (n == a && m == b){
		for (int i = 0; i < a; ++i){
			for (int j = 0; j < b; ++j){
				finalmatrix[a][b] -= matrix2[a][b];
			}
		}
	}
	else{
		cout << "Enter correct dimensions.";
	}
}
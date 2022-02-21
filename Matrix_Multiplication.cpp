#include<iostream>
using namespace std;

class matrix {
  
	int a[4096][4096], b[4096][4096], ans[4096][4096];

	public:
		matrix() {
			cout << "Enter data for first array:" << endl;
			for(int i = 0; i < 3; i++)
				for(int j = 0; j < 3; j++)
					cin >> a[i][j];
			cout << "Enter data for second array:" << endl;
			for(int i = 0; i < 3; i++)
				for(int j = 0; j < 3; j++)
					cin >> b[i][j];
		}

		void multiplication() {
			cout << "After matrix multiplication" << endl;
			for(int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					ans[i][j] = 0;
					for(int k = 0; k < 3; k++)
						ans[i][j] += a[i][k] * b[k][j];
					cout << ans[i][j] << "\t";
				}
				cout << endl;
			}
		}
};

int main() {
	cout << "Program for calculation of Matrix Multiplication" << endl;
	matrix newMat = matrix();
	newMat.multiplication();
	return 0;
}

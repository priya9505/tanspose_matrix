#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n][m];
		for(int i = 0; i<n; i++)
		{
			for(int j = 0; j<m; j++)
			{
				cin >> a[i][j];
			}
		}
		cout << "Transpose of the given matrix is: " << endl;
		for(int j = 0; j < n; j++)
		{
			for(int i = 0; i < m; i++)
			{
				cout <<  a[i][j] << " ";
			}
			cout << endl;
		}

}

#include<iostream>
using namespace std;

void matrix(int n, int m);

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	int m;
	cout << "Input m: ";
	cin >> m;
	matrix(n, m);
	return 0;
}

void matrix(int n, int m)
{
	int k = 0;
	int* arr = new int[n * m];
	int max = -9999999;
	int min = 9999999;
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			cin >> *(arr + i * n + j);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (*(arr + i * n + j + k) > max)max = *(arr + i * n + j + k);
			if (*(arr + i * n + j + k) < min)min = *(arr + i * n + j + k);
		}
		k++;
		cout << "MAX: " << max << " | " << "Min: " << min << endl;
		max = -9999999;
		min = 9999999;
	}
	delete[] arr;
}
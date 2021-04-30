#include<iostream>
using namespace std;
void minNum(int n, int m);
int main()
{
	int n, m;
	cout << "Input n: ";
	cin >> n;
	cout << "Input m: ";
	cin >> m;
	minNum(n, m);
	return 0;
}
void minNum(int n, int m)
{
	int* x = new int[n];
	int* y = new int[m];
	int* arr = new int[m+n];
	int counter = 0;
	int min = 9999999;
	bool isIn = false;
	for (int i = 0; i < n; i++)
	{
		cout << "Input x" << i << " ";
		cin >> x[i];
	}
	for (int i = 0; i < m; i++)
	{
		cout << "Input y" << i << " ";
		cin >> y[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (x[i] == y[j])
			{
				isIn = true;
			}
		}
		if (isIn == false)
		{
			arr[counter] = x[i];
			counter++;
		}
		isIn = false;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (y[i] == x[j])
			{
				isIn = true;
			}

		}
		if (isIn == false)
		{
			arr[counter] = y[i];
			counter++;
		}
		isIn = false;
	}
	for (int i = 0; i < counter; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << min << endl;
	delete[] x;
	delete[] y;
	delete[] arr;
}
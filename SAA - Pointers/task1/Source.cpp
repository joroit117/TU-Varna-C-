#include<iostream>
using namespace std;

int shift_l(int arr[], int n, int k);

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	int k;
	cout << "Input k: ";
	cin >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> *(arr + i);
	}
	shift_l(arr, n, k);
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << endl;
	}
	delete[]arr;
	return 0;
}

int shift_l(int* arr, int n, int k)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 2; j < n + 1; j++)
		{
			*(arr + j - 2) = *(arr + j - 1);
		}
	}
	return *(arr);
	delete[]arr;
}
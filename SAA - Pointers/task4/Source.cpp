#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	int n;
	cout << " Input n: ";
	cin >> n;
	int m;
	cout << " Input m: ";
	cin >> m;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		int temp = arr[i];
		while (temp >= 1)
		{
			sum += temp % 10;
			temp /= 10;
		}
		if(sum == m)
		{
			cout << arr[i] << " - " << i << endl;
		}
		sum = 0;
	}
	delete[] arr;
	return 0;
}

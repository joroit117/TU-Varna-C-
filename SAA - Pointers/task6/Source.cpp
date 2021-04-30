#include<iostream>
using namespace std;
void primeNumbers(int n);
int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
    primeNumbers(n);
	return 0;
}
void primeNumbers(int n)
{
	bool isPrime = true;
	int br = 0;
	int* arr = new int[n];
	for (int i = 2; i < n; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
			}
		}
		if (isPrime == true)
		{
			arr[br] = i;
			br++;
		}
		else 
		{
			isPrime = true;
		}
	}
	for (int i = 0; i < br-2; i++)
	{
		if (arr[i + 1] - arr[i] == 4)
		{
			cout << arr[i] << " - " << arr[i + 1] << endl;
		}
		else if(arr[i + 2] - arr[i] == 4)
		{
			cout << arr[i] << " - " << arr[i + 2] << endl;
		}
	}
	delete[] arr;
}
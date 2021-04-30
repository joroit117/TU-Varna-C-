#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	int* x = new int[n];
	int* y = new int[n];
	int minX = 999999;
	int minIndexI = 0;
	int minIndexJ = 0;
	int minY = 999999;
	int MIN = 999999;
	for (int i = 0; i < n; i++)
	{
		cout << "Input x coordinate: ";
		cin >> x[i];
		cout << "Input y coordinate: ";
		cin >> y[i];
	}
	for (int i = 0, j = 1; i < n, j < n; i++, j++)
	{
			if (abs(x[i] - x[j]) < minX)
			{
				minX = abs(x[i] - x[j]);
			}
			if (abs(y[i] - y[j]) < minY)
			{
				minY = abs(y[i] - y[j]);
			}
			if (minX + minY < MIN)
			{
				MIN = minX + minY;
				minIndexI = i;
				minIndexJ = j;
				cout << minIndexI << endl;
				cout << minIndexJ << endl;
			}
	}
	cout << "Point A: (" << x[minIndexI] << "; " << y[minIndexI] << ")" << endl;
	cout << "Point B: (" << x[minIndexJ] << "; " << y[minIndexJ] << ")" << endl;
	return 0;
	delete[] x;
	delete[] y;
}
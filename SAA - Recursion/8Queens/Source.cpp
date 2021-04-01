#include<iostream>
using namespace std;

void print();
void true_false(int i, int j, int k);
void place(int i);

const int N = 8;
int a[N] = {1, 1, 1, 1, 1, 1, 1, 1};
int b[2 * N - 1] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int c[2 * N - 1] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int pos[N] = {0, 0, 0, 0, 0, 0, 0, 0};

void main()
{
	place(1);
	system("pause");
}

void print()
{
	for (int m = 0; m < N; m++)
	{
		cout << "   " << pos[m];
	}
	cout << '\n';
}

void true_false(int i, int j, int k)
{
	a[j - 1] = k;
	b[i + j - 2] = k;
	c[i - j + 7] = k;
}

void place(int i)
{
	int j;
	for (j = 1; j <= N; j++)
	{
		if ((a[j - 1] == 1) && (b[i + j - 2] == 1) && (c[i - j + 7] == 1))
		{
			pos[i - 1] = j;
			true_false(i, j, 0);
			if (i < N)
			{
				place(i + 1);
			}
			else
			{
				print();
			}
			true_false(i, j, 1);
		}
	}
}
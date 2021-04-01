#include<iostream>
using namespace std;

void hanoj(char A, char C, char B, int n);

void main()
{
	char A = 'A', B = 'B', C = 'C';
	int n;

	do {
		cout << "Enter the disk's number n: ";
		cin >> n;
	}while(n <= 0 || n > 10);

	hanoj(A, C, B, n);
	system("pause");
}
void hanoj(char A, char C, char B, int n)
{
	if (n == 1) cout << "Move the disk 1 from " << A << " to " << C << endl;
	else
	{
		hanoj(A, B, C, n - 1);
		cout << "Move the disk " << n << " from " << A << " to " << C << endl;
		hanoj(B, C, A, n - 1);
	}
}

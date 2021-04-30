#include <iostream>
using namespace std;
#define n 100
int main()
{
	int i, j, a[n];
	for (i = 2; i < n; i++) a[i] = 1;
	for (i = 2; i < n; i++)
		if (a[i])
			for (j = i; i * j < n; j++) { a[i * j] = 0; cout << a[i * j] << " " << i * j << endl; }
	for (i = 2; i < n; i++)
		if (a[i]) cout << i << ' ';
	return 0;
}

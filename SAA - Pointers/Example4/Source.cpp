#include<iostream>
using namespace std;
int main()
{
	int* pa, a[3] = { 10,20,30 };
	pa = a;
	cout << *pa << "\t" << *(pa + 1) << "\t" << *(pa + 2) << endl;
	cout << a[0] << "\t" << a[1] << "\t" << a[2] << endl;	cout << *pa << "\t" << *pa + 1 << "\t" << *pa + 2 << endl;	return 0;
}
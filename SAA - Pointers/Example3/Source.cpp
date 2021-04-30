#include<iostream>
using namespace std;
int main()
{
	int q, * pq;
	pq = &q;
	*pq = 20;
	(*pq)++;
	cout << "q=" << q << endl;
	cout << "*pq=" << *pq << endl;
	*pq += 1;
	cout << "q=" << q << endl;
	cout << "*pq=" << *pq << endl;
	++* pq;
	cout << "q=" << q << endl;
	cout << "*pq=" << *pq << endl;
	return 0;
}

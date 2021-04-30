#include<iostream>
using namespace std;
int main()
{
	int q, * pq;
	pq = &q; // pq - присвоява адреса на q
	cout << "pq=" << pq << endl;
	pq++;// адреса ще се увеличи
	cout << "pq=" << pq << endl;
	float qf, * pqf;
	pqf = &qf;
	cout << "pqf=" << pqf << endl;
	pqf++; // адреса ще се увеличи 
	cout << "pqf=" << pqf << endl;
	double qd, * pqd;
	pqd = &qd;
	cout << "pqd=" << pqd << endl;
	pqd++; // адреса ще се увеличи 
	cout << "pqd=" << pqd << endl;	return 0;}
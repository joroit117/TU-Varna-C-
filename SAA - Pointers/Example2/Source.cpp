#include<iostream>
using namespace std;
int main()
{
	int q, * pq;
	pq = &q; // pq - ��������� ������ �� q
	cout << "pq=" << pq << endl;
	pq++;// ������ �� �� �������
	cout << "pq=" << pq << endl;
	float qf, * pqf;
	pqf = &qf;
	cout << "pqf=" << pqf << endl;
	pqf++; // ������ �� �� ������� 
	cout << "pqf=" << pqf << endl;
	double qd, * pqd;
	pqd = &qd;
	cout << "pqd=" << pqd << endl;
	pqd++; // ������ �� �� ������� 
	cout << "pqd=" << pqd << endl;	return 0;}
#include<iostream>
using namespace std;
void push(int n);
void copy();
void print();
struct queue1
{
	int key;
	queue1* next;
} *first = NULL, * last = NULL, * p;
struct queue2
{
	int key;
	queue2* next;
} *first2 = NULL, * last2 = NULL, * p2;
void main()
{
	int num;
	cout << "Input integers\n";
	while (cin >> num)
		push(num);
	copy();
	print();
}
void push(int n)
{
	p = last;
	last = new queue1;
	last->key = n;
	last->next = NULL;
	if (p != NULL)p->next = last;
	if (first == NULL)
	{
		first = last;
	}
}
void copy()
{
	while (first != NULL)
	{
		int k;
		k = first->key;
		p2 = last2;
		last2 = new queue2;
		last2->key = k;
		last2->next = NULL;
		if (p2 != NULL)p2->next = last2;
		if (first2 == NULL)
		{
			first2 = last2;
		}
		p = first;
		first = first->next;
		if (first == NULL)
			last = first;
		delete p;
	}
}
void print()
{
	p2 = first2;
	while (p2 != NULL)
	{
		cout << p2->key << " ";
		p2 = p2->next;
	}
	delete p2;
}
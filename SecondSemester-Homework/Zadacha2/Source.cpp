#include<iostream>
using namespace std;
const int n = 15;
int sizeG = 0;
struct link
{
	char key; link* next;
} *gr[n];
void init(link* gr[n]);
int search_node(link* gr[n], char c);
int search_arc(link* gr[5], char c1, char c2);
void add_node(link* gr[n], char c);
void add_arc(link* gr[n], char c1, char c2);
void del_arcs(link* gr[n]);
void list_node(link* gr[n]);
void init(link* gr[n])
{
	for (int i = 0; i < n; i++)gr[i] = NULL;
}
int search_node(link* gr[n], char c)
{
	int flag = 0; for (int i = 0; i < n; i++)
		if (gr[i])if (gr[i]->key == c)
		{
			flag = 1;
			break;
		}
	return flag;
}
int search_arc(link* gr[5], char c1, char c2)
{
	int fl = 0;
	int flag = 0;
	if (search_node(gr, c1) && search_node(gr, c2))
	{
		int i = 0;
		while (gr[i]->key != c1) i++;
		link* p = gr[i];
		while (p->next != NULL)
		{
			p = p->next;
			if (p->key == c2) { fl = 1; break; }
		}
		while (p->key != c2 && p->next != NULL)
		{
			p = p->next;
			fl = 1;
		}
		if (p->key == c2 && fl == 1) flag = 1;
	}
	return flag;
}
void add_node(link* gr[n], char c)
{
	if (search_node(gr, c))cout << "\nExisting node!\n";
	else
	{
		sizeG++;
		int j = 0;
		while (gr[j] && (j < n))j++;
		if (gr[j] == NULL) {
			gr[j] = new link;
			gr[j]->key = c; gr[j]->next = NULL;
		}
		else
			cout << "\nOverflow!\n";
	}
}
void add_arc(link* gr[n], char c1, char c2)
{
	int i = 0;
	link* p;
	if (search_arc(gr, c1, c2))
	{
		cout << "\nExisting arc!";
	}
	else
	{
		if (!(search_node(gr, c1)))add_node(gr, c1);
		if (!(search_node(gr, c2)))add_node(gr, c2);
		while (gr[i]->key != c1)i++;
		p = new link;
		p->key = c2;
		p->next = gr[i]->next;
		gr[i]->next = p;
	}
}
void del_arcs(link* gr[n])
{
	for (int i = 0; i < sizeG; i++)
	{
		link* p = gr[i], *q = NULL;
		while (p->next != NULL)
		{
			q = p;
			p = p->next;
			if (p->key == gr[i]->key)
			{
				q->next = p->next;
				delete p;
				break;
			}
		}
	}
}
void list_node(link* gr[n])
{
	cout << "\n";
	for (int i = 0; i < sizeG; i++)
	{
		link* p = gr[i];
		cout << p->key <<" - ";
		while (p->next != NULL)
		{
			p = p->next;
			cout << p->key;
		}
		cout << endl;
	}
}
void main()
{
	setlocale(LC_ALL, "bg");
	char c, k;
	int m;
	do
	{
		cout << "\n\n    Main menu\n\n";
		cout << "1 -Init\n";
		cout << "2 -Add node\n";
		cout << "3 -Add arc\n";
		cout << "4 -Delete all loop-arcs\n";
		cout << "5 -Search Node\n";
		cout << "6 -Search Arc\n";
		cout << "7 -Print All\n";
		cout << "8 -End";
		cout << "\n\nEnter (1-8):";
		cin >> m;
		switch (m)
		{
		case(1):
		{
			init(gr);
			break;
		}
		case(2):
		{
			cout << "\nEnter node (char): ";

			cin >> c;
			add_node(gr, c);
			break;
		}
		case(3):
		{
			cout << "\nEnter first node (char) :";
			cin >> c;
			cout << "\nEnter second node (char):";
			cin >> k;
			add_arc(gr, c, k);
			break;
		}
		case(4):
		{
			del_arcs(gr);
			break;
		}
		case(5):
		{
			cout << "\nEnter node (char): ";
			cin >> k;
			if (search_node(gr, k))
				cout << "\nSearch result: OK!";
			else
				cout << "\nSearch result: NO!";
			break;
		}
		case(6):
		{
			cout << "\nEnter first node (char):";
			cin >> c;
			cout << "\nEnter second node (char):";
			cin >> k;
			if (search_arc(gr, c, k))
				cout << "\nSearch result: OK!";
			else cout << "\nSearch result: NO!";
			break;
		}
		case(7):
		{
			list_node(gr);
			break;
		}
		}
	} while (m != 8);
	cout << "\n";
}
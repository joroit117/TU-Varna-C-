#include<iostream> 
using namespace std;

const int n = 24;
int fib(int i); 
void main()
{
    int nn;
    cout << "nn=";
    cin >> nn;
    for (int j = 0; j < nn; j++)
        cout << fib(j) << "  ";
    system("pause");
}

int fib(int i)
{
    static int knownf[n];
    if (knownf[i] != 0)
        return knownf[i];
    int t = i;
    if (i < 0)
        return 0;
    if (i > 1)
        t = fib(i - 1) + fib(i - 2);
    return knownf[i] = t;
}
#include<iostream> 
using namespace std;

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
    if (i < 1)
        return 0;
    if (i == 1)
        return 1;
    return fib(i - 1) + fib(i - 2);
}
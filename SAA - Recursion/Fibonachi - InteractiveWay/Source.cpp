#include<iostream> 
using namespace std;

const int n = 50;
int f[n];

void fib_iter(int n);
void main()
{
    int nn;
    cout << "nn=";
    cin >> nn;
    fib_iter(nn);
    system("pause");
}

void fib_iter(int n)
{
    f[0] = 0;
    f[1] = 1;
    for (int j = 2; j < n; j++)
        f[j] = f[j - 1] + f[j - 2];
    cout << "\nFibonachi:\n";
    for (int i = 0; i < n; i++)
        cout << f[i] << "  ";
}
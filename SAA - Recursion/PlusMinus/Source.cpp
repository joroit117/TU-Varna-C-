#include <math.h> 

#include <iostream> 

using namespace std;

void variate(unsigned i);

void check_sol();

const int n = 8; // Брой числа в редицата 

int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };//Редица 

int sum = 0; //Търсена сума 

void main()

{

	variate(0);

	system("pause");

}

void variate(unsigned i)

{

	if (i >= n)

	{

		check_sol();

		return;

	}

	a[i] = abs(a[i]); variate(i + 1);

	a[i] = -abs(a[i]); variate(i + 1);

}

void check_sol()

{

	unsigned i;

	int temp_sum = 0;

	for (i = 0; i < n; i++) temp_sum += a[i];

	if (temp_sum == sum) //Намерено е решение 

	{

		for (i = 0; i < n; i++)

			if (i > 0) cout << '+' << a[i];

			else cout << a[i];

		cout << '=' << temp_sum << '\n';

	}

}
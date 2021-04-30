#include<iostream>
using namespace std;
int main()
{
	int mondayCounter = 1;
	int year = 2001;
	int days = 365;
	int firstDay = 1;
	for (int i = year; i <= 3000; i++)
	{
		
		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
		{
			days = 366;
		}
		else
		{
			days = 365;
		}
		if ((firstDay + days) % 7 == 1)
		{
			mondayCounter++;
		}
		firstDay = (firstDay + days) % 7;
		
	}
	cout << "Mondays in XXI: " << mondayCounter << endl;
	return 0;
}
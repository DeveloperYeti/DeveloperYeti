#include <stdio.h>
#include <iostream>

using namespace std;

int main61()
{
	int num;
	cin >> num;
	if (num > 0)
	{
		cout << "plus"<< endl;
	
		if(num%2 == 0)
		{
			cout << "even" << endl;
		}
		else
		{
			cout << "odd" << endl;
		}
	}
	if (num < 0)
	{
		cout << "minus";

		if (num % 2 == 1)
		{
			cout << "odd" << endl;
		}
		else
		{
			cout << "even" << endl;
		}
	}
	return 0;
}
#include <stdio.h>
#include <iostream>

using namespace std;
int main48()
{
	int a;
	cin >> a;

	if (a == 1)
	{
		cout << 0;
	}
	else if (a == 0)
	{
		cout << 1;
	}
	else 
	{
		cout << "범위 초과";
	}
	return 0;
}
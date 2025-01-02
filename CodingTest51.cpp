#include <stdio.h>
#include <iostream>


using namespace std;
int main51()
{
	int a, b;
	cin >> a >> b;
	if (0 <= a && a <= 1 && 0 <= b && b <= 1)
	{
		if ((a == 1 && b == 0 )|| (a == 0 && b == 1))
		{
			cout << 1;
		}
		else
		{
			cout << 0;  
		}
	}
	else
	{
		cout << "예외처리";
	}
	return 0;

}
#include <stdio.h>
#include <iostream>

using namespace std;
int main52()
{
	int a, b;
	cin >> a >> b;
	if (a >= 0 && 1 >= a && b >= 0 && 1 <= b)
	{
		if (a != true && b != true)
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
		cout << "잘못된 입력 값";
	}
	return 0;
}
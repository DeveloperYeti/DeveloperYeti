#include <stdio.h>
#include <iostream>

using namespace std;
int main49()
{
	int a, b;
	cin >> a >> b;
	if(a==1 || a== 0 && b ==1 || b==0)
		if (a == 1 && b == 1 || a == 0 && b == 0)
		{
			cout << 1;
		}
		else 
		{
			cout << 0;
		}
	return 0;
}


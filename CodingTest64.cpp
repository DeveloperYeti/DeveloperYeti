#include <stdio.h>
#include <iostream>


using namespace std;
int main64()
{
	
	while (true)
	{
		int n;
		cin >> n;

		if (n!= 0)
			{
			cout << n << endl;
			}
		else

		{
			goto reload;
		}
	}
	reload:
	
	cout << "retry";
	return 0;
}
#include <stdio.h>
#include <iostream>

using namespace std;
int main22()
{
	char d[30];
	cin.getline(d, 30);
	
	for (int i = 0; i <= sizeof(d); i++)
		{
			cout << d[i] << endl;
		}

}
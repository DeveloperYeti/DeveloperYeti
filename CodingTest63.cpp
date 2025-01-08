#include <stdio.h>
#include <iostream>

using namespace std;

int main63()
{
	char a;
	cin >> a;

	switch (a)
	{
	case 'A':
		cout << "best!!!";
		break;
	case 'B':
		cout << "good!!";
		break;
	case 'C':
		cout << "run!";
		break;
	case 'D':
		cout << "slowly";
		break;
	default:
		cout << "No Answer";
		break;
	}
	return 0;
}
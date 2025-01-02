#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
int number(int num1, int num2)
{
	return num1 + num2;
}

int main35()
{
	int num1, num2;
	cin >> num1 >> num2;
	cout << number(num1, num2);
	return 0;
}

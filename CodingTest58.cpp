#include <stdio.h>
#include <iostream>


using namespace std;
int main58()
{
	int num1, num2, num3, result;
	cin >> num1 >> num2 >> num3;
	result = (num1 < num2 ? num1 : num2) < num3 ? (num1 < num2 ? num1 : num2) : num3;
	cout << result << endl;
	//3개의 정수 3항연산
	return 0;
}
#include <stdio.h>
#include <iostream>

using namespace std;

int main68()
{
	int score;

	cin >> score;
	if (90 <= score && score <= 100)
	{
		cout << "A";
	}
	else if (70 <= score && score <= 89)
	{
		cout << "B";
	}
	else if (40 <= score && score <= 69)
	{
		cout << "C";
	}
	else if (0 <= score && score <= 39)
	{
		cout << "D";
	}
	
	return 0;
}
//switch case 문은 조건식을 사용할 수 없고 정수 , 열거형 값 등과 직접적으로 매칭이 된다. 사용할거면 열거형 정수에 맞춰서 나누기를 해서 집어넣는 것 
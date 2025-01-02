#include <stdio.h>
#include <iostream>

using namespace std;
int main43()
{
	int a, b;
	int c = 1;
	cin >> a >> b;
	
	for (int i = 0; i < b; i++)
		{
			c *= 2;
		}
	a = a * c;
	cout << a << endl;

	return c;
	// C 의 값이 for 문을 돌때마다 b 번의 횟수를 입력받아서 0, 1,2 이런식이면 3을 입력했을 때의 경우의수가 3개
	// 자기 자신에 2를 제곱해줌으로 써 결과값을 2의 배수로 받아와서 a 랑 곱셈을 하여 결과값을 출력
}
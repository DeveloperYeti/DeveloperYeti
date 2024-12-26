#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
int main14()
{
	float a;

	cin >> a;
	cout << round(a * 100) / 100;
	return a;
}
// 소수점 3번째 자리에서 2번째 자리로 반올림
// 올림은 ceil , 내림은 floor, 반올림은 round 이다.

// fixed 랑 precision 두개의 차이점 알고 어떤 상황에서 쓰는지 알면 좋음
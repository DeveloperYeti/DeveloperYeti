#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main27()
{
	long float d;
	cin >> d;
	cout << fixed << setprecision(11) << d <<endl;
	return 0;
	// setprecision 은 ㄷ특정 소숫점의 값까지만 출력하세 해주는 함수다. ceil 올림 floor 내림 round 반올림 함수. 
}
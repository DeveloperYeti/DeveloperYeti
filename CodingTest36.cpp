#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main36()
{
	char a;

	cin >> a;
	
	cout << char(int(a)+1) << endl;
	// 문자표에서 아스키 코드는 10진수로 저장하면 65가 되니깐 그걸 덧셈으로 바꿔서 char 로 다시 아스키 코드로 출력을 하면 문자값으로도 덧셈을 할 수 있음."
	return 0;
}
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;
int main21()
{
	float a;
	cin >> a;

	if (a < 10000 && a > -10000) 
		{
		cout << floor(a) << endl;
		cout << a - (floor(a)) << endl;
		}

	return 0;
}


// 여기서 getline함수를 사용하여 입력을 받고 그것을 배열에 넣고 pop 을 사용해서 각 순번의 첫번재를 첫번재 줄에 출력하고 나머지를 다른 배열에 쌓아서 출력하는 형식으로 풀 수 있을 것 같다.
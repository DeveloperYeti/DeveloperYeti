#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>


using namespace std;
int main16()
{
	int h, m;
	string time_input;
	
	getline(cin, time_input);

	stringstream ss(time_input);
	char colon;
	ss >> h >> colon >> m;
	
	cout << h <<colon<< m;

	return 0;
}

// 이 문제에서는 colon 부분 ':' 이거를 어떻게 입력값을 받을지 그리고  cin >> 한줄로 받는 법을 몰랐음 stringstream 으로 colon 기준으로 분리하고 getline 으로 한줄로 받아 쓰는 법을 알게 됨
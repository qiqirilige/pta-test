// 3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	if (A == B)
		cout << "C" << endl;
	else if (B == C)
		cout << "A" << endl;
	else if (A == C)
		cout << "B" << endl;
	return 0;
}
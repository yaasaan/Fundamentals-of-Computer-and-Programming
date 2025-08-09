#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void binary(int a)
{
	if (a > 0)
	{
		binary(a / 2);
		cout << a % 2;
	}
}
int main()
{
	int x;
	cin >> x;
	binary(x);
	_getch();
}
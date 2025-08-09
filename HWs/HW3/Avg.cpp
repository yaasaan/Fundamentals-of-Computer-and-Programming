#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float a[10], x = 0, av, min = 10000, y;
	for (int i = 0; i < 10; ++i)
		cin >> a[i];
	for (int i = 0; i < 10; ++i)
		x += a[i];
	av = x / 10;
	cout << av << endl;
	for (int i = 0; i < 10; ++i)
		if (av - a[i] > 0)
		{
			if (av - a[i] < min)
			{
				min = av - a[i];
				y = a[i];
			}
		}
		else
			if (a[i] - av < min)
			{
				min = a[i]-av;
				y = a[i];
			}
	cout << y;
	_getch;
}
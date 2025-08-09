#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	string a, b;
	cin >> a;
	char c;
	int x;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cin >> c;
		for (int j = 0; j < a.length(); j++)
			if (c == a[j] || c + 32 == a[j] || c - 32 == a[j])
				a[j] = '0';
	}
	for (int i = 0; i < a.length(); i++)
		if (a[i] != '0')
			b += a[i];

	if (b != "")
		cout << b;
	else
		cout << "empty";
	_getch;
}

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void change(string a,int x)
{
	if (a.length() == x)
		return;
	
	change(a, x + 1);
	cout << a[x];

}

int main()
{
	string a;
	getline(cin,a);
	change(a,0);

	_getch();
}
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	string a;
	int x = 0;
	getline(cin, a);
	for (int i = 0; a[i] != NULL; i++)
	{
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
			x++;
	}
	cout << x;
   _getch(); 
}

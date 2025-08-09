#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x,e, y=0;
	cin >> x;
	e = x;
	for (int i = 0;x>0; i++)
	{
			y = (y*10)+(x % 10);		
			x /= 10;			
	}
	cout << y<<endl;
	if (y == e)
		cout << "YES";

	else { cout << "NO"; }

	_getch();
}
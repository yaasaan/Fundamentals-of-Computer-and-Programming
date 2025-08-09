#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int y, x1 = 1, x2 = 2, t=0;
	cin >> y;
	for (int i = 1; i <= y; i++)
	{
		
		if (i == 1 || i == 2)
			cout << "+";
		x1 = 1;
		x2 = 2;
		if(i!=1 && i!=2){
			t = 0;
			for (int j = 1; t <= y; j++){
				t = x1 + x2;
				if (i == t){
					cout << "+";
					break;
				}
				x1 = x2;
				x2 = t;
			}
			if (t >= y)
				cout << "-";
		}
	}
	_getch();
}
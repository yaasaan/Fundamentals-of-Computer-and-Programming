#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int size,*a, max = 0;
	cin >> size;
	a = new int[size];
	for (int i = 0; i < size; i++)
		cin >> a[i];

	for (int i = 0; i < size; i++)
		for (int j = i; j < size; j++)
			if ((a[j] - a[i]) > max)
				max = (a[j] - a[i]);
	cout << max;
	_getch();
}
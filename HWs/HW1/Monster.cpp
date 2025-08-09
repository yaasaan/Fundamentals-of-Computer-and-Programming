#include "pch.h"
#include <iostream>
//rick b  b+a b+2a ...
//morty d d+c d+2c ...
int main()
{
	int a, b, c, d;
	std::cin >> a >> b;
	std::cin >> c >> d;
	int x, y;
	for (int i = 1; i <= 100; i++)
	{
		x = b + ((i - 1)*a);
		for (int j = 1; j <= 100; j++)
		{
			y = d + ((j - 1)*c);
			if (x == y)
			{
				std::cout << x << "\n";
				exit(0);
			}
		}
	}
	std::cout << "-1";
	return 0;
}
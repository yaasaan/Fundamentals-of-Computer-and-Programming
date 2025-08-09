#include "pch.h"
#include <iostream>
int main()
{
	int n, m, a, z;
	int x, y;
	x = 1, y = 1;
	std::cin >> n >> m >> a;
	for (int i = a; i < n; )
	{
		i += a;
		x++;
	}
	for (int j = a; j < m; )
	{
		j += a;
		y++;
	}
	z = x * y;
	std::cout << z;
	return 0;
}
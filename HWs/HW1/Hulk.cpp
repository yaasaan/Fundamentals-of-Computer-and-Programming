#include "pch.h"
#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1 && i != n)
			std::cout << "I hate that ";
		if (i % 2 == 0 && i != n)
			std::cout << "I love that ";
	}
	if (n % 2 == 1)
		std::cout << "I hate it ";
	if (n % 2 == 0)
		std::cout << "I love it ";
	return 0;
}
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	std::cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			std::cout.width(m + 1);
			std::cout.fill('#');
			std::cout << "\n";
		}
		if (i % 4 == 2)
		{
			std::cout.width(m);
			std::cout.setf(ios::right);
			std::cout.fill('.');
			std::cout << "#";
			std::cout << "\n";
		}
		if (i % 4 == 0)
		{
			std::cout << "#";
			std::cout.width(m);
			std::cout.setf(ios::left);
			std::cout.fill('.');
			std::cout << "\n";
		}
	}
	return 0;
}
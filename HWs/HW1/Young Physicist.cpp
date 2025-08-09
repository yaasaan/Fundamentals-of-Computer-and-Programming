#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int x, y, z, n;
	int sumx = 0, sumy = 0, sumz = 0;
	int At, a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> y >> z;
		sumx = sumx + x;
		sumy = sumy + y;
		sumz = sumz + z;
	}
	a = sumx + sumy + sumz;
	if (a == 0) {
		cout << "YES";
		exit(0);
	}
	cout << "NO";
	return 0;
}
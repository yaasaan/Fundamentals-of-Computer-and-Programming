#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int main()
{
  int sorted[6], n;

  for (int i = 0; i < 3; ++i) sorted[i] = numeric_limits<int>::max();
  for (int i = 3; i < 6; ++i) sorted[i] = numeric_limits<int>::min();

  for (cin >> n; n; cin >> n)
  {
    if (n < sorted[1]) sorted[2] = n;
    if (n > sorted[4]) sorted[3] = n;

    sort(sorted, sorted + 3);
    sort(sorted + 3, sorted + 6);
  }

  cout << sorted[0];
  cout << " " << sorted[1];
  cout << " " << sorted[5];
  cout << " " << sorted[4] << endl;
}


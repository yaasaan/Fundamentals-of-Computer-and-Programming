#include <iostream>

using namespace std;

int main()
{
  int n, p, f = 0;

  do {
    cin >> n;
    if (!n) return 0;

    cout << n << " = ";
    f = 0;

    for (int i = 31; i > -1; --i) {
      p = 1 << i;
      if (n & p) {
        if (f) cout << " + ";
        cout << p;
        f = 1;
      }
    }

    cout << endl;
  } while (1);
}


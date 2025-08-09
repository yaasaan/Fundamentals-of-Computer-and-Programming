#include <iostream>
using namespace std;

int main(){
    int n,m,n1,n2,n3,m1,m2,m3;
    cin >> n >> m;
    n1 = n%10;
    n2 = (n/10)%10;
    n3 = (n/100)%100;
    m1 = m%10;
    m2 = (m/10)%10;
    m3 = (m/100)%10;

    if (n1 < m1)
    {
        cout << n << " < " << m;
    }else if (m1 < n1)
    {
        cout << m << " < " << n;
    }else
    {
        if (n2 < m2)
        {
            cout << n << " < " << m;
        }else if (m2 < n2)
        {
            cout << m << " < " << n;
        }else
        {
            if (n3 < m3)
            {
                cout << n << " < " << m;
            }else if (m3 < n3)
            {
                cout << m << " < " << n;
            }else
            {
                cout << n << " = " << m;
            }   
        }   
    }
}
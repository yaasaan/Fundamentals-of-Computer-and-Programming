#include <iostream>
using namespace std;
int isprime(int);
int main()
{
    int n,b=0,r;
    cin>>n;
    int m=n+1;
    while(n>0)
    {
        b=b+(n%10);
        n= n/10;
    }
    for(int i=b;i>0;)
    {
        if (isprime(m)==1)
        {
             i--;
             m=m+1;
        }
        else
            m=m+1;
    }
    cout<<m-1;
    return 0;

}



    int isprime (int x)
    {
        int c=0;
        for(int i=1 ; i<=x ; i++)
            if(x%i==0)
                c++;
            if (c==2)
                return 1;
        return 0;

    }

#include <iostream>
using namespace std;
int main()
{
    long long int n,f=1,t=1;
    int i=1,answer=0;
    cin>>n;
   while(t)
    {
        f *= i;
        i++;
        if (f==n)
        {
            t=0;
            answer=1;
        }
        if(f>n)
            t=0;

    }
    if(answer==1)
        cout<<i-1;
    else
        cout<<"NOTHING";

}

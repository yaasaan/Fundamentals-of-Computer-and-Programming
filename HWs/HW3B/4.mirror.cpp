#include <iostream>
using namespace std;
int main()
{
    long int n,m;
    cin>>n;
    m=n;
    long int sum=0;
    for( ;n>0;n/=10)
        sum=sum*10+n%10;
    if(sum == m)
        cout<<"YES";
    else
        cout<<"NO";

}


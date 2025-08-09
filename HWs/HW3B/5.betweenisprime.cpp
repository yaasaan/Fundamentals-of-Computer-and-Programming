#include <iostream>
using namespace std;
int isprime(int);
int main()
{
    int a,b , j=0 , k=0 , flag =0;
    int c[202];
    cin>>a>>b;
	if( a==b ||(b-a==1))
    	{
        return 0;
    	}
    int i=a+1;
    for( i ; i<b ; i++ )
    {
        if(isprime (i) == 1)
        {
            c[j]=i;
            j++;
            flag=1;
        }
    }
    for(k ; k<=j-2 ; k++)
        cout<<c[k]<<",";
        if(flag==1)
            {
            cout<<c[k];
            return 0 ;
            }
        else
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

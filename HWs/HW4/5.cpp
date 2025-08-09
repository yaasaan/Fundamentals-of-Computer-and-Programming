#include <iostream>

using namespace std;
  int main()
  {
    int m;
    int temp;
  	int *p;
  	
  cin>>m;
  
      int a[m];
      p=a;
      
      for(int i=0; i<m; i++)
	  {
      	cin>>*p;
      	p++; 
  	}
    
    for (int i=0 ; i<m-1; i++)
	{
    	
    for (int j=0; j<m-1; j++)
	{
    	
	if(a[j]>a[j+1])
	{
		
	temp= a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
		
	}
	}
	}
  p=a; 
  for(int i=0; i<m; i++)
  {
      cout<<*p<<" ";
      p++;
      	 
  }
   return 0;  
 }

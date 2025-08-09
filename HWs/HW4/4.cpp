#include <iostream>
#include <conio.h>

using namespace std;
  
  int main() 
  {
 
  int n;
  cin>>n;
      int a[n];
      int *p;
      p=a;
      for(int i=0; i<n; i++)
      {
      	cin>>*p;
      	p++; 
  }
  p=a;
  p+=n-1;
  for(int j=0; j<n; j++)
  {
  cout<<*p<<"  ";
  p--;
  }
  }

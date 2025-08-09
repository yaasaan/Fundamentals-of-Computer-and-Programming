#include <iostream>
using namespace std;

int main() {
	
	int n , n1 , n2 , n3;
	cin >> n;
	n1 =  n%10;
	n2 = (n%100)/10;
	n3 = (n%1000)/100;
	
	if (n1==0 ) {
		if (n2==0){
			cout << n3;
		}
		else {
			cout << n2 << n3;
		}
	}
	else {
		cout << n1 << n2 << n3;
	}
	
	return 0;
}

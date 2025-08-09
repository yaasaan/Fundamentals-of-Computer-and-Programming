#include<iostream>
using namespace std;

string reverser(string a, bool flag) {
    string A;
    
    if(flag) A += '1';
    
    for(int i = a.size() - 1; i >= 0; i--) {
        A += a[i];
    }
    
    return A;
}

int main() {
	string a, b, ans, answer;
	int A, B, ANS;
	bool flag = false;
  
	cin >> a >> b;
  
	for(int i = a.size() - 1; i >= 0; i--) {
    	A = a[i] - 48;
        B = b[i] - 48;
        ANS = A + B;
        
        if(flag) ANS++;
        flag = ANS > 9;
        
        ANS = ANS % 10;
        ans += (char) ANS + 48;
    }
    
	cout << reverser(ans, flag);
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	
	int n;
	int answer = 0;
	cin >> n;
	while (n >= 5) {
		n -= 5;
		answer++;
	}
	while (n >= 4) { 
		n -= 4;
		answer++;
	}
	while (n >= 3) { 
		n -= 3;
		answer++;
	}
	while (n >= 2) { 
		n -= 2;
		answer++;
	}
	while (n >= 1) { 
		n -= 1;
		answer++;
	}
	
	cout << answer;

	
	return 0;
}
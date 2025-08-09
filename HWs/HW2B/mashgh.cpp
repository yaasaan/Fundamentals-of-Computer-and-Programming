#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    if (n1 && n2 && n3)
        (n1+n2+n3 == 180) ? cout << "Yes" : cout << "No";
    else
        cout << "No";
}
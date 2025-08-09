#include <iostream>
using namespace std;

int main(){
    unsigned int a,b,c;
    cin >> a >> b >> c;

    if(((a*a)==(b*b)+(c*c)) || ((b*b)==(a*a)+(c*c)) || ((c*c)==(b*b)+(a*a)))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

struct Message
{
    string s;
    string b;
};

class SpamDecetor{
	private:
		string r;
		Message msg;
	public:
		SpamDecetor(Message m): msg(m) , r("RESULT : "){};
		string detect(){
			
			int sLength = msg.s.length();
			int bLength = msg.b.length();
			
			bool error1 , error2;
			
			bool isDigit = false;
			bool wrongWord = false;
			int digitCount = 0;
			int count2 = 0;
			
			for(int i=0 ; i<sLength ; i++){
				if('9' - msg.s[i] > 0){
					digitCount++;
				}
			}
			
			for(int i=0 ; i<bLength ; i++){
				int value = msg.b[i]-0;
				if(value >= 97 && value <= 122 || value >= 65 && value <= 90){
					count2++;
				}
			}
			
			if(count2 > bLength/2){
				wrongWord = true;
			}
			
			if(digitCount == sLength){
				isDigit = true;
			}
			if(sLength == 0 || sLength < 4 || isDigit){
				r = r + "INVALID SENDER |";
				error1 = true;
			}
			
			if(wrongWord || msg.b.find("spam") != string::npos){
				r = r + "INVALID CONTENT |";
				error2 = true;
			}
			return r;
		}	
};

int main(){
	int n;
	cout<<"Enter Number Of msg (Max = 50) : ";cin>>n;
	while(n--){
		string s;
		cout<<"msg Sender : ";cin>>s;
		string b;
		cout<<"msg body : ";cin>>b;
		Message msg;
		msg.s = s;
		msg.b = b;
		SpamDecetor spam(msg);
		cout<<spam.detect()<<"\n\n";
	}
	
}

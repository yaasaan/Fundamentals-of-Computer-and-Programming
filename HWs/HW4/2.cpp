#include<iostream>
#include<cstdlib>
#include<ctime>
#include<sstream>
#include<string>
#include<math.h>
using namespace std;
	
string nts(float num ){
	ostringstream os;
	os << num;
	return os.str(); 
}

class cn{
	private:
		float real;
		float img;
	public:
		cn(float r , float i): real(r) , img(i){}
		
		string getString(){
			string stringReal = nts(real);
			string stringImg = nts(img);
			if(stringImg[0] != '-'){
				stringImg = "+"+stringImg;
			}
			return stringReal + stringImg;
		}
		
		float magnitude(){
			float realVariable = pow(real,2);
			float imgVariable = pow(img,2);
			float result = pow(imgVariable+realVariable,0.5);
			return result;
		}
		
		void add(float c , float d){
			real = real + c ;
			img = img + d ;
		}
			
		void sub(float c , float d){
			real = real - c ;
			img = img - d ;
		}		
};

int main(){
	float real , img ;
	cout<<"Enter ComplexNumber \n";
	cout<<"Real : ";cin>>real;
	cout<<"Img : ";cin>>img;
	cn number(real,img);
	while (true)
		{
			cout << "\n";
			cout << "   <menu>\n";
			cout << "1-g.getString\n";
			cout << "2-m.magnitude\n";
			cout << "3-a.add\n";
			cout << "4-s.sub\n";
			cout << "11-e.exit\n";
			cout << "\n";
			char ch;
			cout << "Please choose : ";
			cin >> ch;
			if (ch == 'g')
			{
				cout<<"Number To String : "<<number.getString()<<"\n";
			}
			else if (ch == 'm')
			{
				cout<<"Magnitude : "<<number.magnitude()<<"\n";	
			}
			else if(ch == 'a')
			{
				float c , d ;
				cout<<"Enter ComplexNumber \n";
				cout<<"Real : ";cin>>c;
				cout<<"Img : ";cin>>d;
				number.add(c,d);
			}
			else if(ch == 's')
			{
				float c , d ;
				cout<<"Enter ComplexNumber \n";
				cout<<"Real : ";cin>>c;
				cout<<"Img : ";cin>>d;
				number.sub(c,d);
			}
			else if(ch == 'e')	
				break;
		}
	return 0;
}

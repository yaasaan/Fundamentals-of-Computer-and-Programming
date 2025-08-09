#include<iostream>
using namespace std;

struct Teacher
{
    string name;
    int age;
    string d;
};

class List{
	private:
		int index;
		Teacher list[50];
	public:
		List(): index(0) {};
		void add(Teacher t){
			list[index] = t;
			index++;
		}
		int getIndex(){
			return index;
		}
		string getName(int i){
			return list[i].name;
		}
		int getAge(int i){
			return list[i].age;
		}
		
};

int main(){
	int n;
	cout<<"Number Of Teacher (Max = 50) : ";cin>>n;
	List list;
	while(n--){
		string name;
		cout<<"Teacher Name : ";cin>>name;
		int age;
		cout<<"Teacher Age : ";cin>>age;
		string d;
		cout<<"Teacher Departeman : ";cin>>d;
		Teacher T;
		T.name = name;
		T.age = age;
		T.d = d;
		list.add(T);
	}
	int sum = 0 , ave;
	for(int i=0 ; i<list.getIndex() ; i++){
		sum = sum + list.getAge(i);
	}
	ave = sum/list.getIndex();
	int max1 = 0 , max2 = 0;
	int select ;
	for(int i=0 ; i<list.getIndex() ; i++){
		if(list.getAge(i) > ave){
			if(list.getAge(i) > max1){
				max1 = list.getAge(i);
			}else{
				max2 = list.getAge(i);
				select = i;
			}
		}
	}
	cout<<"Teacher "<<list.getName(select)<<" Slected .";
}

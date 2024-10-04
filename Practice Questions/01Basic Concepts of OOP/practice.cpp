#include<iostream>
#include<string>
using namespace std;

class A{
	public:
	A(){
			int n;
			cout<<"enter n: "<<endl;
			cin>>n;
			cout<<"n: "<<n<<endl;
	}
};

class B{
	public:
	string name;
	int age;
	B(string n,int a){
		name = n;
		age = a;
	}
};



int main(){
//	A obj;

	B obj1("mihr",10);
	
	cout<<obj1.name<<endl;
	cout<<obj1.age<<endl;
	
	cout<<"copy constructure"<<endl;
	
	B obj2(obj1);
	cout<<obj2.age<<endl;
	cout<<obj2.name<<endl;
	
	
}

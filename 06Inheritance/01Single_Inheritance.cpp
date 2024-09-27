#include<iostream>
#include<string>
using namespace std;
						/*Single inheritance*/
class person{
public:
	string name;
	int age;
	
	person(){
		cout<<"Parent constructor"<<endl;
	}
	
//	person(string name,int age){
//		this->name = name;
//		this->age = age;
//	}
};

class student: public person{
public:
	//name,age,rollno --rollno joia,name and age already define che.
	int rollno;
	
//	student(string name,int age,int rollno):person(name,age)	 {
//		this->rollno = rollno;
//	}
	
	void getinfo(){
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"rollno:"<<rollno<<endl;
}
student(){
		cout<<"Child constructor"<<endl;
	}
};

int main(){
	student obj;
	obj.name = "Mehul";
	obj.age = 20;
	obj.rollno = 55;
	obj.getinfo();
}

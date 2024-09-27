#include<iostream>
#include<string>
using namespace std;

class student{
public:
	string name;
	int age;
};

class teacher{
public:
	string sub;
	int salary;
};

class ST:public student,public teacher{
	
};

int main(){
	ST obj;
	obj.name = "Berlin";
	obj.sub = "BankHeist";
	cout<<"name:"<<obj.name<<endl;
	cout<<"subject:"<<obj.sub<<endl;
}

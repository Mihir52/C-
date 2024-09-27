#include<iostream>
#include<string>
using namespace std;

class student{
public:
	string name;
//	double cgpa;
	double *cgpaPtr;
	
	student(string name,double cgpa){
		this->name = name;
//		this->cgpa = cgpa;
		cgpaPtr = new double;
		*cgpaPtr = cgpa;
	}
	
	//custom constructer
	student(student &obj){
		this->name = obj.name;
//		this->cgpa = obj.cgpa;
		cgpaPtr = new double;
		*cgpaPtr = *obj.cgpaPtr;
	}
	
	void getinfo(){
		cout <<"name:"<<name<<endl;
		cout <<"cgpa:"<<*cgpaPtr<<endl;
	}
};

int main(){
	//default constructor -- direct call without make custom constructer.
	student s1("rahul",8.9);
	s1.getinfo();
	
	student s2(s1);
	*(s2.cgpaPtr) = 9.9;
	s1.getinfo();
	
	s2.name = "kartik";
	s2.getinfo();
}

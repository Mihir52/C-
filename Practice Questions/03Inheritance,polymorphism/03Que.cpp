/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/

#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		string name;
		int age;
		void perInp(){
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter age : ";
			cin>>age;
		}
};
class Student{
	public:
		float percentage;
		void stuInp(){
			cout<<"Enter percentage : ";
			cin>>percentage;
		}
};

class Teacher{
	public:
		string Tname;
		int Tage;
		float salary;
		void teaInp(){
			cout<<"Enter name : ";
			cin>>Tname;
			cout<<"Enter age : ";
			cin>>Tage;
			cout<<"Enter salary : ";
			cin>>salary;
		}
};

class allCombination:public Person,public Student,public Teacher{
	public:
	void display(){
		cout<<"Your entered details:"<<endl;
		cout<<"Student details"<<endl;
		cout<<"name : "<<name<<endl;
		cout<<"age : "<<age<<endl;
		cout<<"percentage : "<<percentage<<endl;
		cout<<endl;
		cout<<"Teacher details"<<endl;
		cout<<"name : "<<Tname<<endl;
		cout<<"age : "<<Tage<<endl;
		cout<<"percentage : "<<salary<<endl;
		
		
	}
};


int main(){
	allCombination obj;
	cout<<"Student details"<<endl;
	obj.perInp();
	obj.stuInp();
		
	cout<<endl;
		
	cout<<"Teacher details"<<endl;
	obj.teaInp();
	
	cout<<endl;
	obj.display();
	
	
}

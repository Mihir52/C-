/*Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include<iostream>
#include<string>
using namespace std;

class Employee{
	private:
		string name;
		int id;
		float salary;
	
	public:
		Employee(string ename,int eid,float esalary){
			name = ename;
			id = eid;
			salary = esalary;
		}
		
	//setter
	void setName(string eName){
		name = eName;
	}
	void setid(int eId){
		id = eId;
	}
	void setSalary(float eSalary){
		salary = eSalary;
	}
	
	//getter
	string getName(){
		return name ;
	}
	int getid(){
		return id;
	}
	float getSalary(){
		return salary;
	}
	
	void calSalary(float performanceRate){
		if(performanceRate >= 0.0 && performanceRate <= 1.5){
			salary = salary * performanceRate;
		}
		else{
			cout<<"invalid performance rating "<<endl;
		}
		cout<<"Update salary : "<<salary<<endl;
	}
	

	void display(){
		cout<<"Employee name : "<<name<<endl;
		cout<<"Employee id : "<<id<<endl;
		cout<<"Employee salary : "<<salary<<endl;
	}
	
};

int main(){	
	Employee obj("Hello",1234,10000);
	obj.display();
	
	float performanceRate; 
  	cout << "Input performance rating (0.0-1.2): "; 
	cin >> performanceRate;
	
	obj.calSalary(performanceRate);
}

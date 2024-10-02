/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member functions 
to set and get the values of these variables.*/

#include <iostream>
#include<string>
using namespace std;

class Person{
	private:
		string name;
		int age;
		string country;
		
	public:
	void setName(string n){
		name = n;
	}
	string getName(){
		return name;
	}
	
	void setAge(int a){
		age = a;
	}
	int getAge(){
		return age;
	}
	
	string setCountry(string c){
		country = c;
	}
	string getCountry(){
		return country;
	}
	
};

int main(){
	Person obj;
	obj.setName("Mihir");
	obj.setAge(20);
	obj.setCountry("India");
	
	cout<<"Name : "<<obj.getName()<<endl;
	cout<<"Age : "<<obj.getAge()<<endl;
	cout<<"Country : "<<obj.getCountry()<<endl;
}

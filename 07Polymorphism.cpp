#include<iostream>
#include<string>
using namespace std;
// Compile time polymorphism - ex: constructor overloading

class A{
	string name; 
public:
	A(){
		cout<<"non-parameterized constructor"<<endl;
	}
	
	A(string name){
		this->name = name;
		cout<<"parameterized constructor"<<endl;
	}
};

int main(){
	A obj("mihir");
}


// ex:Function overloading
/*
class A{
public:
	void show(int x){
		cout<<"int : "<<x<<endl;
	}
	
	void show(char ch){
		cout<<"char : "<<ch<<endl;
	}
};
int main(){
	A obj;
	obj.show(90);
//	obj.show('I');
}
*/

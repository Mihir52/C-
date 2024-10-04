// WAP to create simple calculator using class

#include <iostream>
using namespace std;

class calculator{
	public:
	int addtion(int num1,int num2){
		return num1 + num2;
	}
	int subtract(int num1,int num2){
		return num1 - num2;
	}
	int multiply(int num1,int num2){
		return num1 * num2;
	}
	int division(int num1,int num2){
		return num1 / num2;
	}
	int module(int num1,int num2){
		return num1 % num2;
	}
};

int main(){
	calculator obj;
	int a = 10,b = 10;
	cout<<"Addition : "<<a<< "+" <<b<<"="<<obj.addtion(a,b)<<endl;
	cout<<"Subtract : "<<a<< "-" <<b<<"="<<obj.subtract(a,b)<<endl;
	cout<<"Multiply : "<<a<< "*" <<b<<"="<<obj.multiply(a,b)<<endl;
	cout<<"Division : "<<a<< "/" <<b<<"="<<obj.division(a,b)<<endl;
	cout<<"Modules  : "<<a<< "%" <<b<<"="<<obj.module(a,b)<<endl;
	
}

/*Write a program of Addition, Subtraction, Division, Multiplication 
using constructor.*/

#include<iostream>
using namespace std;

class Cal{
	public:
		int a;
		int b;
	int Add(int a,int b){
		return a+b;
	}
	
	int Sub(int a,int b){
		return a-b;
	}
	
	int div(int a,int b){
		return a/b;
	}
	
	int Multiply(int a,int b){
		return a*b;
	}
	
		
};

int main(){
	int a,b;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	
	Cal obj;
	cout<<"Addition        :"<<obj.Add(a,b)<<endl;
	cout<<"Subtraction     :"<<obj.Sub(a,b)<<endl;
	cout<<"Division        :"<<obj.div(a,b)<<endl;
	cout<<"Multiplication  :"<<obj.Multiply(a,b)<<endl;
}

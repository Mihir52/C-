/*Write a program to find the max number from given two numbers using 
friend function*/

#include<iostream>
using namespace std;

class Numbers{
	private:
		int num1;
		int num2;
	
	public:
		//constructer
		Numbers(int a,int b){
			num1 = a;
			num2 = b;
		}
		
		//friend function declaration
		friend int findMax(Numbers& pair);
		
		//display numebrs
		void display(){
			cout<<"Num1 : "<<num1<<", Num2 : "<<num2<<endl;
		}
	
};

int findMax(Numbers& pair){
	return (pair.num1 > pair.num2) ? pair.num1 : pair.num2;
}

int main(){
	Numbers obj(50,90);
	
	obj.display();
	
	cout<<"Max number is : "<<findMax(obj)<<endl;		
}

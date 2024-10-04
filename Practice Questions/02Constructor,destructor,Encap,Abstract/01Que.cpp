/*Write a programto find the multiplication values and the cubic 
values using inline function*/

#include<iostream>
using namespace std;

/*inline function--syntax
inline return-type function-name(parameter){
		*code*
}*/

//Multiplication inline function
inline int multiply(int a,int b){
	return a * b;
}

//cube inline function
inline int cube(int a){
	return a*a*a;
}

int main(){
	int n1,n2;
	cout<<"Enter 2 numbers : "<<endl;
	cin>>n1>>n2;
	cout<<"Multiplication is : "<<multiply(n1,n2)<<endl;
	
	
	int n;
	cout<<"Enter a number : "<<endl;
	cin>>n;
	cout<<"Cube is : "<<cube(n)<<endl;
}

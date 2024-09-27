#include<iostream>
#include<string>
using namespace std;
/*Combination of more than 1 type of inheritance*/

class A{
public:
	void fun1(){
		cout<<"Class A"<<endl;
	}
};
class B:public A{
public:
	void fun2(){
		cout<<"Class B"<<endl;
	}
};
class C:public A{
public:
	void fun3(){
		cout<<"Class C"<<endl;
	}
};
class D:public B,public C{
public:
	void fun4(){
		cout<<"Class D"<<endl;
	}
};

int main(){
	A obj1;
	obj1.fun1();
	cout<<endl;
	
	B obj2;
	obj2.fun1();
	obj2.fun2();
	cout<<endl;
	
	C obj3;
	obj3.fun1();
	// obj3.fun2();
	obj3.fun3();
	cout<<endl;
	
	D obj4;
	// obj4.fun1();
	obj4.fun2();
	obj4.fun3();
	obj4.fun4();
	
}

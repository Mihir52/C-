#include<iostream>
#include<string>
using namespace std;
/*
void fun(){
	static int x = 0;
	cout<<"x:"<<x<<endl;
	x++;
}

int main(){
	fun();
	fun();
	fun();
}
*/

class A{
	public:
	int x;
	void valX(){
		x = x + 1;
	}
};

int main(){
	A obj1;
	A obj2;
	
	obj1.x = 100;
	obj2.x = 200;
	
	obj.valX();
	cout<<obj1.x()<<endl;
//	cout<<obj2.x()<<endl;
}








#include<iostream>
#include<string>
using namespace std;
//Run time polymorphism

//ex : function overriding

class parent{
public:
	void getinfo(){
		cout<<"parent class"<<endl;
	}
};
class child:public parent{
public:
	void getinfo(){
		cout<<"Child class"<<endl;
	}
};

int main(){
//	parent obj;
//	child obj;
	obj.getinfo();
}

//ex : virtual function 
/*
class parent{
public:
	void getinfo(){
		cout<<"parent class"<<endl;
	}
	
	virtual void hello(){
		cout<<"hello from parent"<<endl;
	}
};

class child{
public:
	void getinfo(){
		cout<<"child class"<<endl;
	}
	void hello(){
		cout<<"hello from child"<<endl;
	}
};

int main(){
	child obj;
	obj.hello();
}
*/


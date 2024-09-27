#include<iostream>
#include<string>
using namespace std;

						/*Multi-level inheritance*/

class grandparent{
public:
	grandparent(){
		cout<<"Grandparent class"<<endl;
	}
};
class parent:public grandparent{
public:
	parent(){
		cout<<"Parent class"<<endl;
	}
};
class child:public parent{
public:
	child(){
		cout<<"Child class"<<endl;
	}
};

int main(){
	child obj;	
}

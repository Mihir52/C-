#include<iostream>
#include<string>
using namespace std;

class laptop{
public:
	//non-parameterized constructer
	laptop(){
		cout<<"hi,i am constructer"<<endl;
	}
	
	//parameterized constructor
	laptop(string name, string condition,int price){
		this->name = name;
		this->condition = condition;
		this->price = price;
	}
	
	//copy constructor
	laptop(laptop &orgobj){
		cout<<"i am custom copy constructor..."<<endl;
		this->name = orgobj.name;
		this->condition = orgobj.condition;
		this->price = orgobj.price;
	}
	
	
	string name;
	string condition;
	int price;
	
	void getinfo(){
		cout<<"name:"<< name <<endl;
		cout<<"condition:"<< condition <<endl<<endl;
	}
};

int main(){
	laptop L1;  //Constructer call
	laptop L2;
	
	laptop L3("hp","New",20000);
	L3.getinfo();
	
	laptop L4(L3);
	L4.getinfo();
}

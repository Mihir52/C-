#include<iostream>
#include<string>
using namespace std;

class student{
public:
	string name;
	double* cgpaptr;
	
	student(string name,double cgpa){
		this->name = name;
		cgpaptr = new double;
		*cgpaptr = cgpa;
	}
	
	//destructer
	~student(){
		cout<<"hi,i am destructer"<<endl;
		delete cgpaptr;  //memory leak
	}
	
	void getinfo(){
		cout<<"name:"<<name<<endl;
		cout<<"cgpa:"<<*cgpaptr<<endl;
	}
};

int main(){
	student s1("kartik",8.3);
	s1.getinfo();
}

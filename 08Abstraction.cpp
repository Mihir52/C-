#include<iostream>
#include<string>
using namespace std;

class Shape{ 	//abstract class -- idea
	public:
	virtual void draw() = 0;	//pure virtual function
};

class Circle{   // -- implementation
	public:
		void draw(){
			cout<<"drawing a circle"<<endl;
		}
};

int main(){
	Circle obj;
	obj.draw();

//	Shape obj;
//	obj.draw();
}

/*Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance*/

#include <iostream>
using namespace std;

class Base{
	public:
	int baseData;
	
	//constructor
	Base(int baseData){
		this->baseData = baseData;
		cout<<"Base class constructer called:"<<baseData<<endl;
	}
	
	void displayBase(){
        cout << "Base class baseData: " << baseData << endl;
    }
};

class InterMediate:public Base{
	public:
		int intermediateData;
		
	InterMediate(int baseData, int intermediateData)
        : Base(baseData), intermediateData(intermediateData) {
        cout << "Intermediate class constructor called: " << intermediateData << endl;
    }
	
	void displayIntermediate(){
        cout << "Intermediate class intermediateData: " << intermediateData << endl;
    }
	
};

class Derived:public InterMediate{
	public:
		int derivedData;
		Derived(int baseData, int intermediateData, int derivedData)
        : InterMediate(baseData, intermediateData), derivedData(derivedData) {
        cout << "Derived class constructor called: " << derivedData << endl;
    }
		
	void displayDerived() const {
        cout << "Derived class derivedData: " << derivedData << endl;
    }
};

int main(){
	Derived obj(10,20,30);
	cout<<"Displaying all data : "<<endl;
	obj.displayBase();
	obj.displayIntermediate();
	obj.displayDerived();
}

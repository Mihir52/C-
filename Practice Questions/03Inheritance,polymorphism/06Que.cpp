/*Write a C++ Program to show access to Private Public and Protected using
Inheritance*/

#include <iostream>
using namespace std;

class Base{
	private:
		int privateData;
	protected:
		int protectedData;
	public:
		int publicData;
		
	//Constructer
	Base(int privateData,int protectedData,int publicData){
		this->privateData = privateData;
		this->protectedData = protectedData;
		this->publicData = publicData;
	}
		
	void displayBase(){
		cout << "Base class privateData: " << privateData << endl;
        cout << "Base class protectedData: " << protectedData << endl;
        cout << "Base class publicData: " << publicData << endl;
	}
	
};

class Derived:public Base{
	public:
	Derived(int privateData,int protectedData,int publicData):
		Base(privateData,protectedData,publicData){
		}
	
	void displayDerived(){
		// Error: privateData is private in Base
		//cout << "Derived class privateData: " << privateData << endl; 
       	cout << "Derived class protectedData: " << protectedData << endl;
       	cout << "Derived class publicData: " << publicData << endl;
		}
};

int main(){
	Base obj1(1,2,3);
	Derived obj2(4,5,6);
	
	cout<<"Displaying base class data : "<<endl;
	obj1.displayBase();
	cout<<endl;
	
	cout<<"Displaying derived class data : "<<endl;
	obj2.displayDerived();
	
	cout<<endl;
	
	cout<<"Direct access in main function:"<<endl;
    //cout<<"Direct access privateData: "<<obj1.privateData<<endl; // Error: privateData is private in Base
    //cout<<"Direct access protectedData: "<<obj1.protectedData<<endl; // Error: protectedData is protected in Base
    cout<<"Direct access publicData: "<<obj1.publicData<<endl;
}

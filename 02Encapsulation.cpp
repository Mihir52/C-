#include<iostream>
#include<string>
using namespace std;

class Account{
	private:
		double bal;
		int AcNo;
	public:
		string username;
		string acId;
};

int main(){
	Account bank;
	bank.acId = "Hello";
	bank.username = "Person"; 
	
	cout<< bank.acId <<endl;
	cout<< bank.username <<endl;
	
}

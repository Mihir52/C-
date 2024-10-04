/*Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account*/

#include<iostream>
#include<string>
using namespace std;

class BankAccount{
	private:
		int AccountNo;
		float balance;
		
	public:
		BankAccount(int AcNo, float bal){
			AccountNo = AcNo;
			balance = bal;
		}
		
	void deposite(float amount){
		balance = balance + amount;
		cout<<"Deposite amount is : "<<amount<<endl;
		cout<<"Total balance is : "<<balance<<endl;
	}
	
	float withdrawAm;
	void withdraw(float with){
		withdrawAm = balance - with;
		cout<<"Withdraw amount is : "<<with<<endl;
		cout<<"Total amount in account : "<<withdrawAm<<endl;
	}
	
	void display(){
		cout<<"Account number is : "<<AccountNo<<endl;
		cout<<"Balance is : "<<balance<<endl;
	}
};

int main(){
	BankAccount obj(1234,50000);
	obj.display();
	cout<<endl;
	
	obj.deposite(2000);
	cout<<endl;
	
	obj.withdraw(5000);
	
}

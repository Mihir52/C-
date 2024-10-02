/*Define a class to represent a bank account. 
Include the following members:
Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/

#include<iostream>
#include<string>
using namespace std;

class BankAc{
	public:
    // Data member
	string depositorName;
    int accountNumber;
    string accountType;
    float balance;
    
	// member function 
	void getdetails(string name, int accNum, string accType, float bal){
		depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = bal;
	}
	
//	Deposite money
	void deposite(float amount){
		balance = balance + amount;
		cout<<"Deposite money : "<<amount<<endl;
		cout<<"Total Balance is : "<<balance<<endl;
	}
	
//	Withdraw money
	void withdraw(float amount){
		balance -= amount;
		cout<<"Withdraw money : "<<amount<<endl;
	}
	
//	display details function
	void display(){
		cout<<"Name of the depositor : "<<depositorName<<endl;
		cout<<"Type of account : "<<accountType<<endl;
		cout<<"Balance amount in the account : "<<balance<<endl;
	}
};

int main(){
	BankAc obj;
	obj.getdetails("Ramesh",123456789,"Saving account",50000.0);
	
	cout<<"Account Details : "<<endl;
	obj.display();
	
	cout<<endl;
	
	obj.deposite(1000);
	cout<<endl;
	
	obj.withdraw(10000);
	cout<<endl;
	
	cout<<"Update account details : "<<endl;
	obj.display();
			
}

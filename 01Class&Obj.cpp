#include<iostream>
#include<string>
using namespace std;

class teacher{
	// Properties / Attributes
	private:
		int salary;
		
	public:
	string name;
	string depart;
	string sub;

	// methods / member function
	void changeDept(string newDepart){
		depart = newDepart;
	}	
	
	//setter
	void setSalary(int s){
		salary = s;
	}	
	//getter
	int getSalary(){
		return salary;
	}
};

int main(){
	teacher t1;
	t1.name = "Karma";
	t1.depart = "Technology";
	t1.sub = "Python";
	t1.setSalary(25000) ;
	
	cout<< t1.name <<endl;
	cout<< t1.depart <<endl;
	cout<< t1.sub <<endl;
	cout<< t1.getSalary() <<endl;
}

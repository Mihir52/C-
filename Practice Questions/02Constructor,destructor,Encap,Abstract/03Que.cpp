/*Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/

#include<iostream>
#include<string>
using namespace std;

class Car{
	private:
		string company;
		string model;
		int year;
	
	public:
		//setter
		void setcompany(string c){
			company = c;
		}
		void setmodel(string m){
			model = m;
		}
		void setyear(int y){
			year = y;
		}
		
		//getter
		string getcompany(){
			return company;
		}
		string getmodel(){
			return model;
		}
		int getyear(){
			return year;
		}
};

int main(){
	Car obj;
	obj.setcompany("TVS");
	obj.setmodel("TVS Apache RTR 180");
	obj.setyear(2024);
	
	cout<<"Company name : "<<obj.getcompany()<<endl;
	cout<<"Model : "<<obj.getmodel()<<endl;
	cout<<"Year : "<<obj.getyear()<<endl;
}

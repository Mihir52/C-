/*Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/

#include<iostream>
using namespace std;

class Data{
	private:
		int day;
		int month;
		int year;
		
	public:
		//setter
		void setDay(int d){
			day = d;
		}
		void setMonth(int m){
			month = m;
		}
		void setYear(int y){
			year = y;
		}
		
		//getter
		int getDay(){
			return day;
		}
		int getMonth(){
			return month;
		}
		int getYear(){
			return year;
		}
		
		bool isvalid = false;
		void validate(int day,int month,int year){
			if(day >=1 && day <= 31){
				isvalid = true;
			}
			if(month >= 1 && month <= 12){
				isvalid = true;
			}
			if(year >= 1 && year <= 12){
				isvalid = true;
			}
			
			if(isvalid){
				cout<<"Not valid"<<endl;
			}
			else{
				cout<<"This date is valid"<<endl;
			}
		}
		
};

int main(){
	Data obj;
	
	int day,month,year;
	cout<<"Enter day(1-31) : ";
	cin>>day;
	
	cout<<"Enter month(1-12) : ";
	cin>>month;
	
	cout<<"Enter year(1-12) : ";
	cin>>year;
	
	obj.validate(day,month,year);
	
	cout<<day<<"-"<<month<<"-"<<year<<endl;
	
}

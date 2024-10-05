/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/

#include<iostream>
#include<string>
using namespace std;

class cricketer{
	public:
		string name;
		int match;
		
	void inputData(){
		cout<<"Enter cricketer name : ";
		cin>>name;
		cout<<"Enter number of matches : ";
		cin>>match;
	}
};

class Batsman:public cricketer{
	public:
		int totalRuns;
		float avgRuns;
		int bestPerformance;
		
	void inputDataC(){
		cout<<"Eneter total runs : ";
		cin>>totalRuns;
		cout<<"Eneter best performance : ";
		cin>>bestPerformance;
	}
	
	void caculateAvgRuns(){
		avgRuns = static_cast<float>(totalRuns) / match;
	}
	
	
	void displayData(){
		cout<<"Cricketer Name : "<<name<<endl;
		cout<<"Number of Matches : "<<match<<endl;
		cout<<"Total Runs : "<<totalRuns<<endl;
		cout<<"Average Runs : "<<avgRuns <<endl;
		cout <<"Best Performance: " <<bestPerformance <<endl;
	}
};

int main(){
	Batsman obj;
	obj.inputData();
	obj.inputDataC();
	
	cout<<endl;
	
	obj.displayData();
	
}

/*Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation*/

#include<iostream>
#include<string>
using namespace std;

//Student Class
class Student{
	private:
		string name;
		int std;
		int rollno;
		float marks;
		
	public:
	void setStudentInfo(string nm, int cls, int rn, float mk){
        name = nm;
        std = cls;
        rollno = rn;
        marks = mk;
    }
		
		
	void calculateGrade(float marks){
		if(marks >= 80){
			cout<<"Grade : A";
		} 
		else if(marks >= 60){
			cout<<"Grade : B";
		}
		else if(marks >= 40){
			cout<<"Grade : C";
		}
		else{
			cout<<"Fail";
		}
	}
	
	void displayAddress(){
		cout<<"Address : B/19 Ranchod-colony behind Ajay-tenament-4 Amaraiwadi,Ahmedabad"<<endl;;
//		cout<<""<<endl;
	}
};


int main(){
	string name;
	int std;
	int rollno;
	float marks;
	
	Student obj;
	
	cout<<"Enter student name : ";
	cin>>name;
	cout<<"Enter student class : ";
	cin>>std;
	cout<<"Enter student rollno : ";
	cin>>rollno;
	cout<<"Enter student marks : ";
	cin>>marks;
	
	
	obj.calculateGrade(marks);
	cout<<endl;
	obj.displayAddress();
}

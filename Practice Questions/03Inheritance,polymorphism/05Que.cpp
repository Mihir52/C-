/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;

class Student{
	public:
		int rollno;
		void setRn(int rollno){
			this->rollno = rollno;
		}
		void displayRn(){
			cout << "Roll Number: " << rollno << endl;
		}
};
class Test:public Student{
	public:
		float mark1;
		float mark2;
		void setMark(float mark1,float mark2){
			this->mark1 = mark1;
			this->mark2 = mark2;
		}
		void displayMarks(){
			cout<<"Marks in subject1 : "<<mark1<<endl;
			cout<<"Marks in subject2 : "<<mark2<<endl;
		}
		
};
class result:public Test{
	public:
		float totalMarks;
		void calTotalMarks(){
			totalMarks = mark1 + mark2;
		}
		void displayTotal(){
			cout<<"Total marks : "<<totalMarks<<endl;
		}
};

int main(){
	result obj;
	obj.setRn(22);
	obj.setMark(50,60);
	obj.calTotalMarks();
	
	obj.displayRn();
	obj.displayMarks();
	obj.displayTotal();
}

/*Write a programto concatenate the two strings using Operator Overloading*/

#include<iostream>
#include<string.h>
using namespace std;

class String{
	char str[20];
	public:
		void inputStr(){
			cout<<"Enter a string : "<<endl;
			cin>>str;
		}
		void print(){
			cout<<"String is : "<<str<<endl;
		}
		
		//overloaded operator function
		String operator +(String x){
			String t;
			strcpy(t.str,str);
			strcat(t.str,x.str);
			return t;
		}
				
};

int main(){
	String s1,s2,s3;
	s1.inputStr();
	s2.inputStr();
	s3 = s1+s2;
	s3.print();
}

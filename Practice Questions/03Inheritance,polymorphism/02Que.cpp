/*Write a C++ Program to find Area of Rectangle using inheritance*/

#include<iostream>
using namespace std;

class sides{
	public:
		float length;
		float width;
		float area;
};

class userInp:public sides{
	public:
	void inputuser(){
		cout<<"Enter length : ";
		cin>>length;
		cout<<"Enter width : ";
		cin>>width;
	}
};
class RectangeArea:public userInp{
	public:
		void calArea(){
			area = length * width;
			cout<<"Area of Rectangle is : "<<area<<endl;
		}
		
};

int main(){
	RectangeArea obj;
	obj.inputuser();
	obj.calArea();
}

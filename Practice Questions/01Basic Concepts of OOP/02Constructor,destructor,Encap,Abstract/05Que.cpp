/*Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include<iostream>
using namespace std;

class Triangle{
	private:
		float side1;
		float side2;
		float side3;
	public:
		Triangle(float s1,float s2,float s3){
			side1 = s1;
			side2 = s2;
			side3 = s3;
		}
	
	void determine(){
		if(side1 == side2 && side2 == side3){
			cout<<"Equilateral Triangle"<<endl;
		}
		else if(side1==side2 || side1 == side3 || side2==side3){
			cout<<"Isosceles Triangle"<<endl;
		}
		else{
			cout<<"scalene Triangle"<<endl;
		}
	}
};

int main(){
	float s1,s2,s3;
	cout<<"Input 3 sides of triangles : "<<endl;
	cout<<"Side 1 : ";
	cin>>s1;
	cout<<"Side 2 : ";
	cin>>s2;
	cout<<"Side 3 : ";
	cin>>s3;
	
	Triangle obj(s1,s2,s3);
	
	obj.determine();
	
}

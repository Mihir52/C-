/*Write a C++ program to implement a class called Circle that has 
private member variables for radius. Include member functions to 
calculate the circle's area and circumference.*/
#include <iostream>
#include <string>
using namespace std;

class Circle{
	private:
		float radius;
	
	public:
		int n;
//		cout<<"enter a radius : "<<endl;
//		cin>>n;
		
		void setradius(float r){
			radius = r;
		}
		
		float getradius(){
			return radius;
		}
		
		float getArea(float area){
			return 3.14 * radius *radius;
		}
		
		float getCircumference(float cir){
			return 2* 3.14* radius;
		}
};

int main(){
	Circle obj;
	obj.setradius(10);
	cout<<"area of a circle is : "<<obj.getArea(10)<<endl;
	cout<<"Circumference is : "<<obj.getCircumference(10)<<endl;
}

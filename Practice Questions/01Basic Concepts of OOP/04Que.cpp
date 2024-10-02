/*Write a C++ program to create a class called Rectangle that has 
private member variables for length and width. Implement member 
functions to calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;

class Rectangle{
	private:
		float length,width;
	
	public:
		void setlenAnwi(float l,float w){
			length = l;
			width = w;
		}
		
		float getArea(float length,float width){
			return length * width;
		}
		
		float getPerimeter(float length,float width){
			return 2*(length+width);
		}
};

int main(){
	Rectangle obj;
	cout<<"Rectangel area is : "<<obj.getArea(10,10)<<endl;
	cout<<"Perimeter is : "<<obj.getPerimeter(10,10)<<endl;
}

/*Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area*/

#include <iostream>
using namespace std;

class AreaCal{
	public:
		
	//calculate the area of a rectangle function
	float area(float length, float breadth) {
        return length * breadth;
    }
    
    //calculate the area of a triangle function
    float area(float base, float height,bool isTriangle) {
        if (isTriangle) {
            return 0.5 * base * height;
        }
        return 0; 
    }
    
    //calculate the area of a circle function
    float area(float radius) {
        return 3.14 * radius * radius;
    }
    
    
};


int main(){
	AreaCal obj;
	
	// Rectangle 
    float length, breadth;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << obj.area(length, breadth) << endl;
    
    // Triangle
    float base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << obj.area(base, height,true) << endl;
    
    // Circle
    float radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << obj.area(radius) << endl;
	
	
}

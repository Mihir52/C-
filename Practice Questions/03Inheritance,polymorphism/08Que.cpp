/*Write a program to Mathematic operation like Addition, Subtraction,Multiplication, 
Division Of two number using different parameters and Function Overloading*/

#include <iostream>
using namespace std;

//Function to add two integer
int add(int a,int b){
	return a + b;
}

// Function to add two float
float add(float a, float b) {
    return a + b;
}

//Function to Subtract two integer
int Subtract(int a,int b){
	return a - b;
}

//Function to Subtract two float
float Subtract(float a, float b) {
    return a - b;
}

//Function to multiplay two integer
int Multiply(int a,int b){
	return a * b;
}

//Function to multiply two float
float Multiply(float a, float b) {
    return a * b;
}

//Function to Divide two integer
int Division(int a,int b){
	return a / b;
}

//Function to Divide two float
float Division(float a, float b) {
    return a / b;
}


int main(){
	int x1 = 10,x2 = 5;
	float y1 = 5,y2 = 10;
	
	//Addition
	cout << "Addition of integers: " << add(x1, x2) << endl;
    cout << "Addition of floats: " << add(y1, y2) << endl;
    
    //Subtract
    cout << "Subtraction of integers: " << Subtract(x1, x2) << endl;
    cout << "Subtraction of floats: " << Subtract(y1, y2) << endl;
    
    //Multiply
    cout << "Multiplication of integers: " << Multiply(x1, x2) << endl;
    cout << "Multiplication of floats: " << Multiply(y1, y2) << endl;
    
    //Division
    cout << "Division of integers: " << Division(x1, x2) << endl;
    cout << "Division of floats: " << Division(y1, y2) << endl;
}

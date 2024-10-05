//Write a program of to swap the two values using template

#include<iostream>
using namespace std;

template <typename T>
void swapValues(T& a,T& b){
	T temp = a;
	a = b;
	b = temp;
}

int main(){
	int x = 5,y = 10;
	float pi = 3.14, e = 2.71;
	
	// Before swapping
    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "pi = " << pi << ", e = " << e << endl;
    
    //Swap integers
    swapValues(x, y);
    
    //swap float
    swapValues(pi, e);
    
    //After swapping
    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "pi = " << pi << ", e = " << e << endl;
}

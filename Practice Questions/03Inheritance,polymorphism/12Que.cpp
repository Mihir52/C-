/*Write a programto swap the two numbers using friend function without using 
third variable*/

#include<iostream>
using namespace std;

class swapNum{
	private:
		int a;
		int b;
	public:
		swapNum(int x,int y){
			a = x;
			b = y;
		}
		
	//Friend function declaration
	friend void swap(swapNum& obj);
	
	//display the numbers
	void display(){
		cout<< "a:" << a <<" b:"<< b <<endl;
	}
	
};

void swap(swapNum& obj) {
    obj.a = obj.a + obj.b;  
    obj.b = obj.a - obj.b;  
    obj.a = obj.a - obj.b;  
}


int main(){
	swapNum nums(10,20);
	
	cout<<"Before swappin :"<<endl;
	nums.display();
	
	//swap the numbers
	swap(nums);
	cout<<"After swaping : "<<endl;
	nums.display();
}




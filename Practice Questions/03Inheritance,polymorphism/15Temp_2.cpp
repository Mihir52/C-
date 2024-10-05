//Write a program of to sort the array using templates

#include<iostream>
using namespace std;

template<typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// Template function to sort an array using bubble sort
template<typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swapValues(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to print the array
template<typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
	int intArray[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(intArray) / sizeof(intArray[0]);
	cout << "Original integer array: ";
	printArray(intArray, n);
	sortArray(intArray, n);
	cout << "Sorted integer array: ";
	printArray(intArray, n);
}

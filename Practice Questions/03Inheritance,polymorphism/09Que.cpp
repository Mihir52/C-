/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/

#include <iostream>
using namespace std;

class Matrix {
private:
    int* data;
    int size;

public:
    // Constructor to initialize the matrix with a given size
    Matrix(int sz) : size(sz) {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = 0;
        }
    }

    // Copy Constructor
    Matrix(const Matrix& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }

    // Destructor to free allocated memory
    ~Matrix() {
        delete[] data;
    }

    // Assignment Operator
    Matrix& operator=(const Matrix& other) {
        if (this == &other) {
            return *this; // Handle self-assignment
        }

        // Free existing resource
        delete[] data;

        // Allocate new memory and copy data
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }

        return *this;
    }

    // Overload the + operator to add two matrices
    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            cerr << "Matrices must be of the same size!" << endl;
            exit(1); // Exit with an error code
        }
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Function to input matrix data
    void input() {
        cout << "Enter elements of the matrix:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> data[i];
        }
    }

    // Function to display matrix data
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;

    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix m1(size), m2(size);

    cout << "Input first matrix:" << endl;
    m1.input();

    cout << "Input second matrix:" << endl;
    m2.input();

    Matrix m3 = m1 + m2;

    cout << "Result of matrix addition:" << endl;
    m3.display();

}


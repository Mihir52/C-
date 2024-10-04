#include <iostream>
#include <string>

using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string zipCode;

public:
    Address() : street(""), city(""), state(""), zipCode("") {}

    Address(string st, string ci, string stt, string zip)
        : street(st), city(ci), state(stt), zipCode(zip) {}

    void setAddress(string st, string ci, string stt, string zip) {
        street = st;
        city = ci;
        state = stt;
        zipCode = zip;
    }

    void displayAddress() const {
        cout << "Address: " << street << ", " << city << ", " << state << " " << zipCode << endl;
    }
};


class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;
    Address address;

    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

public:
    Student() : name(""), studentClass(""), rollNumber(0), marks(0.0), address() {}

    Student(string nm, string cls, int roll, float mk, Address addr)
        : name(nm), studentClass(cls), rollNumber(roll), marks(mk), address(addr) {}

    void setStudentInfo(string nm, string cls, int roll, float mk, Address addr) {
        name = nm;
        studentClass = cls;
        rollNumber = roll;
        marks = mk;
        address = addr;
    }

    void displayStudentInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.displayAddress();
    }
};


int main() {
    Address addr("123 Main St", "Springfield", "IL", "62704");
    Student stu("John Doe", "10th Grade", 12345, 85.5, addr);

    cout << "Student Information:" << endl;
    stu.displayStudentInfo();

    return 0;
}



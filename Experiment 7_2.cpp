#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getPersonDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void showPersonDetails() {
        cout << "\n--- Person Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int rollNo;

public:
    void getStudentDetails() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }

    void showStudentDetails() {
        cout << "Roll No: " << rollNo << endl;
    }
};

class Test {
protected:
    float marks1, marks2;

public:
    void getMarks() {
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
    }

    void showMarks() {
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
    }
};

class Result : public Student, public Test {
    float total;

public:
    void calculateTotal() {
        total = marks1 + marks2;
    }

    void displayResult() {
        cout << "\n=== Result ===\n";
        showPersonDetails();
        showStudentDetails();
        showMarks();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result r;

    r.getPersonDetails();
    r.getStudentDetails();
    r.getMarks();

    r.calculateTotal();
    r.displayResult();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string studentName;
    int studentID;

public:
    void getStudentDetails() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Student ID: ";
        cin >> studentID;
        cin.ignore(); // to clear input buffer
    }

    void showStudentDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << studentName << endl;
        cout << "ID: " << studentID << endl;
    }
};

class Faculty {
protected:
    string facultyName;
    string subject;

public:
    void getFacultyDetails() {
        cout << "\nEnter Faculty Name: ";
        getline(cin, facultyName);
        cout << "Enter Subject: ";
        getline(cin, subject);
    }

    void showFacultyDetails() {
        cout << "\n--- Faculty Details ---\n";
        cout << "Name: " << facultyName << endl;
        cout << "Subject: " << subject << endl;
    }
};

class Institute : public Student, public Faculty {
    string instituteName;

public:
    void getInstituteDetails() {
        cout << "\nEnter Institute Name: ";
        getline(cin, instituteName);
    }

    void showInstituteDetails() {
        cout << "\n=== Institute Information ===\n";
        cout << "Institute Name: " << instituteName << endl;
        showStudentDetails();
        showFacultyDetails();
    }
};

int main() {
    Institute I;

    I.getInstituteDetails();
    I.getStudentDetails();
    I.getFacultyDetails();

    I.showInstituteDetails();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        int no;
        string name;
        
    public:
        virtual void salary() = 0{
                cout<<"Enter Employee No:";
                cin>>no;
                cout<<"\nEnter Employee Name:";
                cin>>name;
        }
        virtual void display(){
            cout<<"\nEmployee Number is "<<no;
            cout<<"\nEmployee Name is "<<name;
        }
};

class SalariedEmployee :public Employee{
    private:
        double monthlySalary;
    public:
        void salary(){
            Employee::salary();
            cout<<"Enter Employee monthly Salaray:";
            cin>>monthlySalaray;
        }
        void display(){
            cout<<"\nSalaried Employees:";
            Employee::display();
            cout<<"\nSalary:"<<monthlySalary;
        }
};

class HourlyEmployee :public Employee{
    private:
        double hours;
        double rate;
    public:
        void salary(){
            Employee::salary();
            cout<<"\nEnter Hours";
            cin>>hours;
            cout<<"\nEnter Hourly Rate:";
            cin>>rate;
        }
        void display(){
            cout<<"\n Hourly Employee:";
            Employee::display();
            cout<<"\nHours:"<<hours;
            cout<<"\nHourly Rate:"<<rate;
            cout<<"Salary:"<<(rate*hours);
}
};

class CommissionEmployee :public Employee{
    private:
        double salarydouble;
        double overtime;
    public:
        void salary(){
            Employee::salary();
            cout<<"\nEnter Salary";
            cin>>salarydouble;
            cout<<"\nEnter Overtime :";
            cin>>overtime;
        }
        void display(){
            cout<<"\n Commission Employee:";
            Employee::display();
            cout<<"\Salary:"<<hours;
            cout<<"\Overtime:"<<rate;
            cout<<"Total Salary:"<<(salarydouble(overtime*15));
}
};

int main(){
    Employee* emplooyees[3];
    SalariedEmployee new salariedEmployee;
}
#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
    int id;
    string name;
    double salary;
    string department;

    public:
    Employee(int i, string n, double s, string d) {
        id = i;
        setName(n);
        setSalary(s);
        department = d;
    }

    int getId() const { return id; }
    string getName() const { return name; }
    double getSalary() const { return salary; }
    string getDepartment() const { return department; }

    void setName(const string& n) {
        if(n.length() >= 2) {
            name = n;
        } else {
            cout << "Name must be at least 2 characters!" << endl;
            name = "Unknown";
        }
    }

    void setSalary(double s) {
        if(s >= 0) {
            salary = s;
        } else {
            cout << "Salary cannot be negative!" << endl;
            salary = 0;
        }
    }

    void setDepartment(const string& d) {
        department = d;
    }

    void giveRaise(double percentage) {
        if(percentage > 0) {
            salary += salary * (percentage / 100);
            cout << name << " received a " << percentage 
            << "% raise. New salary: $" << salary << endl;
        }
    }

    void display() const {
        cout << "ID: " << id << " | " << name
        << " | $" << salary <<" | " << department << endl;
    }
};

int main() {
    Employee emp(101, "Arjun", 5000, "Engineering");
    emp.display();

    emp.giveRaise(10);
    emp.setSalary(-100);

    cout << "\nFinal details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;

    return 0;
}
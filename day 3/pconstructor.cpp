#include <iostream>
#include<string>
using namespace std;

class Student {
    public:
    string name;
    int age;
    double cgpa;

    //Parameterized constructor
    Student(string n, int a, double c) {
        name = n;
        age = a;
        cgpa = c;
        cout << "Parameterized constructor called for" << name << endl;
    }

    void display() {
        cout << name << " | Age: " << age << " | CGPA: " << cgpa << endl;
    }
};

int main() {
    //Two ways to call parameterized constructor
    Student s1("Arjun", 20, 8.75);               //Implicit call
    Student s2 = Student("Priya", 21, 9.2);      //Explicit call

    s1.display();
    s2.display();
    return 0;
}
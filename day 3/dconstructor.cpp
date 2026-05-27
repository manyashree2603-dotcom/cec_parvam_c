#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;

    //Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called!" << endl;
    }
    
    void display() {
        cout << name << " (" << age << ")" << endl;
    }
};

int main() {
    Student s1;    //Default constructor called
    s1.display();

    Student s2;    //OOPS! This is a function declaration, not an object!
    //Student s2;  //Correct way to call default constructor
    return 0;
}
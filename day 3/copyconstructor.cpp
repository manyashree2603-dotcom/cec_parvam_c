#include <iostream>
#include <cstring>
using namespace std;

class Student {
    public:
    char* name;
    int age;

    Student(const char* n, int a) {
        age = a;
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }

    Student(const Student& s){
        age = s.age;
        name = new char[strlen(s.name)+1];
        strcpy(name, s.name);
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << name << " (" << age <<")" << endl;
    }

    ~Student() {
        delete[] name;
    }
};

int main() {
    Student s1("Arjun", 20);
    Student s2 = s1;

    s1.display();
    s2.display();

    s2.name[0] = 'P';

    s1.display();
    s2.display();

    return 0;
}
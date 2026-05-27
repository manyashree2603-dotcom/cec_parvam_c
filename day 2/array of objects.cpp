#include <iostream.h>
#include <string>
using namespace std;
class student 
{
    public:
    string name;
    int marks;
    student() {name = "unknown"; marks=0;}
    student(string n,int m) {name=n; marks=m;}
    void display()
    {
        cout<<name<<":"<<marks<<endl;
    }
};

int main()
{
    student batch1[3]={
        student("arjun",85);
        student("priya",92);
        student("rahul",78);


    };
    cout<<"batch1 (stack array):"<<endl;
    for(int i=0; i<3; i++)
    {
        batch[i].display();
        cout<<endl;

    };
    student* batch2=new student[3]{
        student("sita",88);
        student("gita",91);
        student("laxman",80);

    };
    cout<<"\n batch2 (heap array):"<<endl;
    for(int i=0; i<3; i++)  
    {
        batch2[i].display();
    }   
   
    delete[] batch2;
    return 0;  
}
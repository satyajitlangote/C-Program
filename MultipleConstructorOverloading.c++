#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    int rollno;
    string name;
    Student(int x)
    {
        rollno=x;
    }
    Student(int x,string str)
    {
        rollno=x;
        name=str;
    }
};
int main()
{
    Student B(1,"Satyajit Langote");
    Student A(2,"Rohit Langote");
    cout<<"Roll No:-\n"<<B.rollno<<"\nName is:-\n "<<B.name<<endl;
    
     cout<<"Roll No:-\n"<<A.rollno<<"\nName is:-\n "<<A.name<<endl;
    

    return 0;
}

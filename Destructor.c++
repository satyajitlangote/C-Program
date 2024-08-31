#include<iostream>
using namespace std;
class Demo
{
    private:
    int num1,num2;
    public:
    Demo(int n1,int n2)
    {
        cout<<"Inside Constructor "<<endl;
        num1=n1;
        num2=n2;
    }
    void display()
    {
        cout<<"num1 =\n"<<num1<<endl;
        cout<<"\n num2 =\n"<<num2<<endl;
    }
    ~Demo()
    {
        cout<<"insisde Destructor ";
    }
};
int main()
{
    Demo obj1(10,20);
    obj1.display();
    return 0;
    
}
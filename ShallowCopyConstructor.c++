#include<iostream>
#include<cstring>
using namespace std;
class CopyConstructor
{
    char * s_copy;
    public:
    CopyConstructor(const char * str)
    {
        s_copy = new char[16];
        strcpy(s_copy , str);
    }
    void concatenate(const char * str)
    {
        strcat(s_copy,str);
    }
    ~CopyConstructor()
    {
            delete []s_copy;
    }
    void display()
    {
         cout<<s_copy<<endl;
    }
};
int main()
{
    CopyConstructor c1("copy");
    CopyConstructor c2=c1;
    c1.display();
    c2.display();
    c1.concatenate("Constructor");
    //concatenate()
    c1.display();
    c2.display();
    return 0;
}
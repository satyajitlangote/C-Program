#include<iostream>
using namespace std;
void swapx(int x,int y);
int main()
{
    int a=50,b=25;
    swapx(a,b);
    cout<<"In the caller :\n";
    cout<<" a= \n"<<a<<"\n b= \n"<<b<<endl;
    return 0;
}
void swapx(int x,int y)
{
    int t;
    x=y;
    y=t;
    cout<<"Inside Function: \n";
    cout<<" X=\n"<<x<<"\n Y=\n"<<y<<endl;
}
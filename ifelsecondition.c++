// cpp program to demonstrate if-else condition 

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<" Enter an integer :";
	cin >> num;
	if(num > 0)
	{
		cout<<"You entered a positive integer"<<num<<endl;
	}
	else if(num < 0)
	{
		cout<<"You entered a Negative integer :"<<num<<endl;
	}
	else
	{
		cout<<"You entered 0:"<<endl;
	}
	cout<<"This line is always printed";
	return 0;
}

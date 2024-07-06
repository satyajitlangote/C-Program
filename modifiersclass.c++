#include<iostream>
using namespace std;
class Room
{
	private:
		double length;
		double breadth;
		double height;

	public:
		void getData(double len,double brth,double hgt)
		{
			length=len;
			breadth=brth;
			height=hgt;
		}
		double calculateArea()
		{
			return length * breadth;
		}
		double calculateVolume()
		{
			return length * breadth * height;
		}
};
int main()
{
	Room room1;

	room1.getData(10,25,50);
	cout<<"Area of room =\n"<<room1.calculateArea();
	cout<<"Volume of room =\n"<<room1.calculateVolume();
	return 0;
}

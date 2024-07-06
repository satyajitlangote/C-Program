#include<iostream>
using namespace std;
class Room
{
    public:
    double length;
    double breadth;
    double height;

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
    room1.length=10;
    room1.breadth=20;
    room1.height=15;
    cout<<"Area of room ="<<room1.calculateArea();
    cout<<"Volume of room ="<<room1.calculateVolume();
    return 0;

}

#include<iostream>
using namespace std;
class Samplecopyconstructor
{
        private:
                int x,y;
        public :
                Samplecopyconstructor(int x1,int y1)
                {
                        x=x1;
                        y=y1;
                }
                Samplecopyconstructor(const Samplecopyconstructor&sam)
                {
                        x=sam.x;
                        y=sam.y;
                }
                void display()
                {
                        cout<<x<<"  "<<endl;
                }
};
int main()
{
        Samplecopyconstructor obj1(15,10);
        Samplecopyconstructor obj2=obj1;
        cout<<"Normal Construstor \n";
        obj1.display();
        cout<<"Copy Constructor \n";
        obj2.display();
        return 0;

}

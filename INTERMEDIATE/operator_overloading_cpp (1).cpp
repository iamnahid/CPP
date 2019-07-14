#include<iostream>
using namespace std;

class Box
{
    double length;
    double width;
    double height;
public:
    void setLength(double length)
    {
        this->length = length;
    }
    void setWidth(double width)
    {
        this->width = width;
    }
    void setHeight(double height)
    {
        this->height = height;
    }
    double getVolume()
    {
        return this->length*this->width*this->height;
    }

    Box operator+(Box box)
    {
        Box b;
        b.length = this->length + box.length;
        b.height = this->height + box.height;
        b.width = this->width + box.width;

        return b;
    }

    Box operator-(Box box)
    {
        Box b;
        b.length = this->length - box.length;
        b.height = this->height - box.height;
        b.width = this->width - box.width;

        return b;
    }

    Box operator*(Box box)
    {
        Box b;
        b.length = this->length * box.length;
        b.height = this->height * box.height;
        b.width = this->width * box.width;

        return b;
    }

    friend ostream& operator<<(ostream& output, Box& box)      {
         cout<<"fgfg";

         return output;
      }
};

int main(void)
{
    Box box1, box2, box3;
    //Box* b1 = new Box();
    //Box* b2 = new Box();

    box1.setLength(5);
    box1.setWidth(5);
    box1.setHeight(5);

    box2.setLength(5);
    box2.setWidth(5);
    box2.setHeight(5);

    //box1 = box2;
    //b1 = b2;

    /*cout<<&box1<<endl;
    cout<<&box2<<endl;
    cout<<endl;
    cout<<b1<<endl;
    cout<<b2<<endl;*/

    /*cout<<box1.getVolume()<<endl;
    cout<<box2.getVolume()<<endl;*/

    box3 = box1+box2;
    //box1.operator+(box2);
    //cout.operator<<(box3);

    cout<<box3;

    int x=10;

    int *p;
    p = x;

    int& r = x;

    return 0;
}

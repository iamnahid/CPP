#include <iostream>
#include <string>

    using namespace std;

class C
{
    public:
    int x,y;

    C(){
        this->x=0;
        this->y=0;
    }
    void setC(int x, int y)
    {
        this->x=x;
        this->y=y;
    }
    int getx()
    {
        return this->x;
    }
    int gety()
    {
        return this->y;
    }
    int getVolume()
    {
        return this->x+this->y;
    }
    C operator+(C c1)
    {
        C c2;
        c2.x=this->x+c1.x;
        c2.y=this->y+c1.y;
        return c2;
    }
    friend ostream& operator<<(ostream &output,C c4)
    {
        return output;
    }
};

int main (void)
{
    C c,c3,c4;
    c.setC(3,4);
    c3.setC(5,6);
    c4=c+c3;
    cout<<c4.getVolume();
}


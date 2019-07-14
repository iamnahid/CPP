#include <iostream>
#include <exception>

    using namespace std;

    class A
    {
        public:

        A(string msg): exception (msg){}
    };

    int main()
    {
        int x=10,y=0,r;

        try
        {
            if(y!=0)
            {
                r=x/y;
            }
            else throw A("attempt to divide by zero");
        }
        catch (A x)
        {
            cout<<x.what();
        }
    }

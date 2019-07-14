#include <iostream>
#include <list>
#include <string>

    using namespace std;

template <class t>

    class P
    {
        public:
        int id;
        float up;
        void setdata(t nvalue,t n1value)
        {
            id=nvalue;
            up=n1value;

        }
        t getdata()
        {
            return data;
        }
    };

    int main ()
    {
        P<int>p;
        p.setdata(100,200.0);
        cout<<p.getdata();
        return 0;
    }

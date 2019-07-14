#include <iostream>
#include <fstream>

    using namespace std;

    int main ()
    {
        int x,y,k;
        ifstream i;
        ofstream o;

        o.open("out.txt");
        o<<"hello"<<endl;

        i.open("in.txt");
        i>>x>>y;
        k=x*y;
        o<<k<<endl;
        return 0;
    }

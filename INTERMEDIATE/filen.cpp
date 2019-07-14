#include <iostream>
#include <fstream>
#include <string>

    using namespace std;

int main ()
{
    ifstream i;
    ofstream o;
    string n;

    i.open("nrk.txt");
    o.open("out.txt");

    i>>n;
    cout<<n;
    o<<n;

    return 0;
}

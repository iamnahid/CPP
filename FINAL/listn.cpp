#include <iostream>
#include <string>
#include <list>
#include <vector>

    using namespace std;

int main ()
{
    list <int> l;
    vector <float> v;

    l.push_back(100);
    l.push_back(200);
    l.push_back(300);

    v.push_back(0.0);
    v.push_back(0.1);
    v.push_back(0.2);
    list <int> :: iterator i=l.begin ();
    vector <float> :: iterator it=v.begin ();

    for(i=l.begin ();i!=l.end ();i++)
    {
        cout<<*i<<endl;
        for(it=v.begin ();it!=v.end ();it++)
    {
        cout<<*it<<endl;
    }
    }

return 0;
;
}

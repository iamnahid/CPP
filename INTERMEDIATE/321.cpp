#include <iostream>

    using namespace std;


  int main ()
{
    int i,j,k,n;

        cout<<"please input the number of column: ";
        cin>>n;
        cout<<endl<<endl;

    for (i=1;i<=n;i--)
    {
        for(j=1;j<=i;j++)
            {
               cout<<"*****";
            }
            cout<<endl;
    }

}

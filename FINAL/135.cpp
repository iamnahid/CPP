#include <iostream>


using namespace std;



    int main ()
    {
        int i,j,r,n;


        cout<<"please input the number of column: ";
        cin>>n;
        cout<<endl<<endl;

        for(i=1;i<=n;i=i+2)
        {

              for(r=n-i;r>=1;r=r-2)
              {
                  cout<<' ';

              }

                  for(r=1;r<=i;r++)
                  {
                      cout<<'*';

                  }

            cout<<endl;
        }

            cout<<endl<<endl;

    }

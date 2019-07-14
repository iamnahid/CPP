#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    ifstream in;
    ofstream out;
    int i,y[6],sem;
    string x;
    float z[6],avg,tgp[6],tgp1,cgp,c,c1;

        in.open("in.txt");
        out.open("out.txt");
        cout<<"Please Input your Complted Semister NO:_ ";
        cin>>sem;
        out<<"Student Name: Nahid,Md.Nahidul Islam"<<endl;
        out<<"Id: 14-27656-3"<<endl;
        out<<"DoB: 5th December 1996"<<endl;
        out<<"Blood Group: B-VE"<<endl;
        out<<"Department: BscCSSE"<<endl<<endl;

        out<<"Semister Completed: "<<sem<<endl;
        out<<"*****************************************************************************************************************************************"<<endl;
        out<<"Subject\t\t Credit\t\t Gpa\t\t Average\t\t TGP\t\t Total Credit\t\t CGPA"<<endl;

            for(i=0;i<=5;i++)
        {
            in>>x>>y[i]>>z[i];
            out<<x<<"\t\t "<<y[i]<<"\t\t "<<z[i]<<endl;
            tgp[i]=y[i]*z[i];
        }
                    tgp1=tgp[0]+tgp[1]+tgp[2]+tgp[3]+tgp[4]+tgp[5];
                    c=y[0]+y[1]+y[2]+y[3]+y[4]+y[5];
                    avg=(z[0]+z[1]+z[2]+z[3]+z[4]+z[5])/6;
                    c1=(sem*avg)/sem;

            out<<"-----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
            out<<"\t\t\t\t\t\t "<<avg<<"\t\t\t "<<tgp1<<"\t\t  "<<c<<"\t\t\t "<<c1<<endl;

        in.close();
        out.close();

return 0;
}

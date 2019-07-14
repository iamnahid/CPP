#include<iostream>
#include<fstream>
using namespace std;

int main(){
    float x,y;

   /* ofstream fout;
    fout.open("D:\Shovra Das\Codes\FIle\out.txt");

    fout<<"Hello"<<endl;
    fout<<123;

    fout.close();
    */

    ifstream fin;
    fin.open("in.txt");

    while(fin>>x && fin>>y){
        cout<<x*y<<endl;
    }

    fin.close();

    return 0;
}

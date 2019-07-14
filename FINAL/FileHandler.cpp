#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(void){
	string fruit;

	ifstream fin;
	fin.open("fruits.txt");

	ofstream fout;
	fout.open("out.txt");

	fin>>fruit;
	fout<<fruit<<endl;

	fin>>fruit;
	fout<<fruit<<endl;

	fin>>fruit;
	fout<<fruit<<endl;
}

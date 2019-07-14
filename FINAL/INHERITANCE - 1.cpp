#include<iostream>
using namespace std;

class Animal{
public:
	Animal(){
		cout<<"I m animal"<<endl;
	}
	~Animal(){
		cout<<"des: animal"<<endl;
	}
};

class Monkey : public Animal{
public:
	Monkey(){
		cout<<"I m Monkey"<<endl;
	}
	~Monkey(){
		cout<<"des: monkey"<<endl;
	}
};

class Dog : public Animal{
public:
	Dog(){
		cout<<"I m Dog"<<endl;
	}
	~Dog(){
		cout<<"des: dog"<<endl;
	}
};

class Bird  : public Animal{
public:
	Bird(){
		cout<<"I m Bird"<<endl;
	}
	~Bird(){
		cout<<"des: bird"<<endl;
	}
};

int main(void){

	//Dog* dog = new Dog();
	//delete dog;
	Dog d;
	Monkey m;


	return 0;
}

#include<iostream>
using namespace std;

class Animal{
public:
	int x;

	virtual void eat(){
		cout<<"i eat anything"<<endl;
	}
	Animal(){
		this->x=10;
	}
	~Animal(){
		cout<<"des: animal"<<endl;
	}
};

class Monkey : public Animal{
public:
	int x;

	 void eat(){
		cout<<"i eat only banana"<<endl;
	}
	Monkey(){
		this->x = 20;
	}
	~Monkey(){
		cout<<"des: monkey"<<endl;
	}
};

int main(){
	Animal* animal;
	Monkey* monkey;

	monkey = new Monkey();
	animal = monkey;

	monkey->eat();
	animal->eat();

	return 0;
}

#include<iostream>
using namespace std;

class A{
public:
	virtual void method(int pm1){
		cout<<"method 1 called"<<endl;
	}
	 void method(int pm1, int pm2){
		cout<<"method 2 called"<<endl;
	}
};

class B : public A{

public:
	void method(int pm1){
		cout<<"method 3 called"<<endl;
	}
	void method(int pm1, int pm2){
		cout<<"method 4 called"<<endl;
	}
};

int main(){
	A* obj1;
	B* obj2;

    obj2 = new B();
	obj1 = obj2; //this line is creating polymorphism


    obj1->method(4);//run time polimorphism
    obj1->method(6, 8);//compile time polimorphism
	obj2->method(4);
	obj2->method(6, 8);






	return 0;
}

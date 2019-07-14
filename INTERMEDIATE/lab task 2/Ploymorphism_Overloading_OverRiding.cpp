#include<iostream>
using namespace std;

class A{
public:
	virtual void method(int param1){
		cout<<"method 1 called"<<endl;
	}
    void method(int param1, int param2){
		cout<<"method 2 called"<<endl;
	}
};

class B : public A{
public:
	void method(int param1){
		cout<<"method 3 called"<<endl;
	}
    void method(int param1, int param2){
		cout<<"method 4 called"<<endl;
	}


};

int main(){
	A* obj1;
	B* obj2;

	obj1 =  new B();
    obj2 = new B();
    obj2->method(10, 20);
	obj2->method(10);
	obj1->method(10, 20);
	obj1->method(10);


	return 0;
}

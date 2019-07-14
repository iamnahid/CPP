#include<iostream>
using namespace std;

class Point{
private:
	int x;
	int y;
public:
	Point(int x, int y){
		this->x = x;
		this->y = y;
	}
	void print(){
		cout<<this->x<<", "<<this->y<<endl;
	}

	friend void func();
	friend class Circle;
};

class Circle{
public:
	void printPoint(Point* p){
		cout<<p->x<<", "<<p->y<<endl;
	}
};

void func(){
	Point* p;
	p = new Point(1, 4);
	//p->print();
	cout<<p->x;
}

int main(){
	//func();

	Point* p;
	p = new Point(1, 4);

	Circle* c;
	c = new Circle;
	c->printPoint(p);

	return 0;
}
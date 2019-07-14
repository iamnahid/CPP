#include<iostream>
#include<string>
using namespace std;

class Person{
    int id;
    string name;
public:
    Person(){
        this->id = -1;
        this->name = "n/a";
    }
    Person(int id, string name){
        this->id = id;
        this->name = name;
    }

    friend void printPerson(Person* p);
    friend void printPerson(Person p);
};

void printPerson(Person* p){
    cout<<p->id<<" "<<p->name<<endl;
}

void printPerson(Person p){
    cout<<p.id<<" "<<p.name<<endl;
}

int add(int x, int y){
    int z = x+y;
    return z;
}

int main(void){
    int x, y;
    Person* p5 = NULL;

    Person p;
    Person* p1 = new Person();

    Person p2(1, "Clark Kent");
    Person* p3 = new Person(2, "James Bond");

    printPerson(p2);
    printPerson(p3);

    x = 10;
    cout<<add(x, 20);

	return 0;
}
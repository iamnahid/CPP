#include<iostream>
#include<string>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

template<class T>
class A
{
    T Data;
public:
    A(){}

    void SetData(T nValue){
        Data = nValue;
    }

    T GetData(){
        return Data;
    }

    void PrintData(){
        cout << Data;
    }
};

class Person{
    int id;
public:
    Person(){
        this->id = 0;
    }
    Person(int id){
        this->id = id;
    }

    friend ostream& operator<<(ostream& out, Person& p){
        out<<p.id;
        return out;
    }
};

int main(void){
    list<int> lst;
    Person p1;
    cout;

    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);

    list<int>::iterator i;
    for(i = lst.begin(); i!=lst.end(); ++i){
       cout<<*i<<endl;
    }

    /*int a[] = {25, 20, 50, 36};
    sort(a+0, a+2);
    for(int i=0; i<4; cout<<a[i]<<endl, ++i);*/

	return 0;
}

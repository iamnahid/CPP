#include<iostream>
#include<string>
using namespace std;

template<class T>
class Item
{
    T Data;
public:
    Item(){}

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

int main(void){

    Item<int> item1;
    item1.SetData(120);
    item1.PrintData();

    cout<<endl;

    Item<float> item2;
    item2.SetData(50.6);
    item2.PrintData();

	return 0;
}

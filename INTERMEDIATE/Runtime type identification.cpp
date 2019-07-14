#include <iostream>
#include <typeinfo>
using namespace std;

class Base
{
    public :
    virtual void Show()
    {
        cout<<"I am in Base Class"<<endl;
    }
};

class Derived1 : public Base
{
      public:
      void Show()
      {
		  cout<<"I am in Derived1 Class"<<endl;
      }
};
class Derived2 : public Base
{
      public:
      void Show()
      {
		  cout<<"I am in Derived2 Class"<<endl;
      }
};

int main()
{
	int i;
    Base *BasePtr,BaseObj;
    Derived1 D1Obj;
	Derived2 D2Obj;

	cout<<"type: "<<typeid(i).name()<<endl;

	BasePtr = &BaseObj;
	cout<<"pointing to: "<<typeid(*BasePtr).name()<<endl;

    BasePtr = &D1Obj;
	cout<<"pointing to: "<<typeid(*BasePtr).name()<<endl;

	BasePtr = &D2Obj;
	cout<<"pointing to: "<<typeid(*BasePtr).name()<<endl;
}

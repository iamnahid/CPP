#include<iostream>
#include<string>
using namespace std;

/*class Vehicle{
protected:
	int noOfWheel;
	string color;
	double speed;
public:
	virtual void ride()=0; //Pure virtual function
	virtual void setNoOfWheel(int noOfWheel)=0;
	virtual void setColor(string color)=0;
	virtual void setSpeed(double speed)=0;
	virtual int getNoOfWheel()=0;
	virtual string getColor()=0;
	virtual int getSpeed()=0;
};*/

class Vehicle{
protected:
	int noOfWheel;
	string color;
	double speed;
public:
	Vehicle(){
		this->noOfWheel = 0;
		this->color = "";
		this->speed = 0.0;
	}

	virtual void ride()=0; //Pure virtual function

	virtual void setNoOfWheel(int noOfWheel){
		this->noOfWheel = noOfWheel;
	}
	virtual void setColor(string color){
		this->color = color;
	}
	virtual void setSpeed(double speed){
		this->speed = speed;
	}
	virtual int getNoOfWheel(){
		return this->noOfWheel;
	}
	virtual string getColor(){
		return this->color;
	}
	virtual double getSpeed(){
		return this->speed;
	}
};

class Car : public Vehicle{
	int noOfDoor;
	bool hasAC;
public:
	Car(){
			noOfDoor = 1;
			hasAC = false;
	}
	void ride(){
		cout<<"I am a car"<<endl;
	}
	void race(){
		cout<<"I am a racing car"<<endl;
	}
	void setSpeed(double speed){
		if(speed<=200.0){
			this->speed = speed;
		}
		else{cout<<"I am a super car"<<endl;

            this->speed = speed;
            }
	}
};

class Van : public Vehicle{
	int noOfDoor;
	bool hasAC;
	double speed;
public:
	void ride(){
		cout<<"I am a Van"<<endl;
	}
};

class Bike : public Vehicle{
public:
	void ride(){
		cout<<"I am a Bike"<<endl;
	}
	void race(){
		cout<<"I am a racing Bike"<<endl;
	}
};

int main(void){
	Vehicle *v, *v1, *v2;

	Car c;
	Van vn;
	Bike b;


	v = &c;
	v1 = &vn;
	v2 = &b;

	v->setSpeed(205.5);
	v->setColor("black");

	cout<<v->getSpeed()<<endl;
	cout<<v->getColor()<<endl;


	return 0;
}

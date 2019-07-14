#include<iostream>
using namespace std;

class CricketPlayer{
protected:
    int MAT;
    int INN;
    double SR;
    double AVE;
public:
	CricketPlayer(){
		cout<<"Constructor: Cricket Player"<<endl;
	}
};

class Batsman : public CricketPlayer{
protected:
    int HS;
    int RUN;
public:
	Batsman(){
		cout<<"Constructor: Batsman"<<endl;
	}
};

class Bowler : public CricketPlayer{
protected:
    int WKTS;
    string BBI;
public:
	Bowler(){
		cout<<"Constructor: Bowler"<<endl;
	}
};

class AllRounder : public Batsman, public Bowler{
public:
	AllRounder(){
		cout<<"Constructor: AllRounder"<<endl;
	}
};


int main(void){
	AllRounder ar;

    return 0;
}

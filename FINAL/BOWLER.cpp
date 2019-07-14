#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

class Bowler{
    string name;
    int MAT;
    int INN;
    int BALL;
    int WKTS;
    string BBI;
    float AVE;
    float ECON;
    float SR;
    int _4W;
    int _6W;
    int _10W;
public:
    Bowler(){
        this->MAT=0;
        this->INN=0;
        this->BALL=0;
        this->WKTS=0;
        this->BBI="0-0";
        this->AVE=0.0;
        this->ECON=0.0;
        this->SR=0.0;
        this->_4W=0;
        this->_6W=0;
        this->_10W=0;
    }
    Bowler(int MAT, int INN, int BALL, int WKTS, string BBI, int _4W, int _6W, int _10W){
        this->MAT=MAT;
        this->INN=INN;
        this->BALL=BALL;
        this->WKTS=WKTS;
        this->BBI=BBI;
        this->AVE=0.0;
        this->ECON=0.0;
        this->SR=0.0;
        this->_4W=_4W;
        this->_6W=_6W;
        this->_10W=_10W;
    }
    Bowler(Bowler* b){
    }
    ~Bowler(){
    }
    string getName(){
        return this->name;
    }
    int getMAT(){
        return this->MAT;
    }
    int getINN(){
        return this->INN;
    }
    int getBALL(){
        this->BALL;
    }
    int getWKTS(){
        this->WKTS;
    }
    string getBBI(){
        this->BBI;
    }
    float getAVE(){
        this->AVE;
    }
    float getECON(){
        this->AVE;
    }
    float getSR(){
        this->SR;
    }
    int get4W(){
        this->_4W;
    }
    int get6W(){
        this->_6W;
    }
    int get10W(){
        this->_10W;
    }

    void setName(string name){
        this->name = name;
    }
    void setMAT(int MAT){
        this->MAT=MAT;
    }
    void setINN(int INN){
        this->INN=INN;
    }
    void setBALL(int BALL){
        this->BALL = BALL;
    }
    void setWKTS(int WKTS){
        this->WKTS = WKTS;
    }
    void setBBI(string BBI){
        this->BBI = BBI;
    }
    void set4W(int _4W){
        this->_4W = _4W;
    }
    void set6W(int _6W){
        this->_6W=_6W;
    }
    void set10W(int _10W){
        this->_10W=_10W;
    }

    void calculateAVE(){
        //this->AVE;
    }
    void calculateECON(){
        //this->AVE;
    }
    void calculateSR(){
        //this->SR;
    }

};

int main(){
    Bowler* b1;
    Bowler* b2;
    Bowler* b3;

    b1 = new Bowler();
    b2 = new Bowler(100, 100, 2000, 200, "5-23", 2, 0, 0);
    b3 = new Bowler(b1);

    b1->setMAT(100);
    b1->setINN(100);
    b1->setBALL(2000);
    b1->setWKTS(200);
    b1->setBBI("7-15");
    b1->set4W(3);
    b1->set6W(1);
    b1->set10W(2);

    b1->calculateAVE();
    b1->calculateECON();
    b1->calculateSR();

    cout<<b1->getMAT()<<endl;
    cout<<b1->getINN()<<endl;
    cout<<b1->getBALL()<<endl;
    cout<<b1->getWKTS()<<endl;
    cout<<b1->getBBI()<<endl;
    cout<<b1->getAVE()<<endl;
    cout<<b1->getECON()<<endl;
    cout<<b1->getSR()<<endl;
    cout<<b1->get4W()<<endl;
    cout<<b1->get6W()<<endl;
    cout<<b1->get10W()<<endl;

    delete b1, b2, b3;
}

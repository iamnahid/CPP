#include<iostream>
//#include<cmath>
//#include<math.h>
using namespace std;

int x=10;

namespace a{
	int x=101;
}

namespace b{
	int x=201;

	int pow(int x, int y){
		cout<<"here"<<endl;
		int result=1;
		for(int i=1; i<=y; i++){
			result*=x;
		}
		return result;
	}
}

using namespace b;
//using  b::pow;

int main(void){

	int x=20;
	cout<<pow(2, 3);

	//cout<<::x;

	return 0;
}
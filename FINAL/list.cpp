#include<iostream>
#include<string>
#include<list>
//#include<vector>
using namespace std;


int main(void){
	list<int> lst;
	lst.push_back(100);
	lst.push_back(101);
	lst.push_back(110);
	lst.push_back(120);
	lst.push_back(121);

	list<int>::iterator it;
	it = lst.begin();
	while(it!=lst.end()){
		cout<<*it<<endl;
		++it;
	}

    cout<<endl;
    cout<<*it<<endl;
    cout<<endl;


	for(it = lst.begin(); it!=lst.end(); ++it){
		cout<<*it<<endl;
	}


	return 0;
}

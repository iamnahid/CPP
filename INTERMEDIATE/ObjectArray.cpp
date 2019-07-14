#include<iostream>
#include<string>
using namespace std;
class Student{
	int id;
	string name;
	float cgpa;
public:
	Student(){
		this->id = 0;
		this->name = "";
		this->cgpa = 0.0;
	}
	Student(int id, string name, float cgpa){
		this->id = id;
		this->name = name;
		this->cgpa = cgpa;
	}
	int getId(){
		return this->id;
	}
	string getName(){
		return this->name;
	}
	float getCgpa(){
		return this->cgpa;
	}
};
int main(){
	/*Student std[3]={Student(1, "J B", 2.63),Student(2, "A B", 2.63),Student(3, "B B", 2.63)};
	
	int i;
	for(i=0; i<3; ++i){
		cout<<endl<<std[i].getId()<<" ";
		cout<<std[i].getName()<<" ";
		cout<<std[i].getCgpa()<<endl;
	}*/

	/*Student std[3];
	Student* s[3];
	int i;
	for(i=0; i<3; ++i){
		s[i] = new Student();
	}*/

	/*Student* s[3];
	s[0] = new Student(1, "J B", 2.63);
	s[1] = new Student(2, "A B", 2.63);
	s[2] = new Student(3, "B B", 2.63);

	int i;
	for(i=0; i<3; ++i){
		cout<<endl<<s[i]->getId()<<" ";
		cout<<s[i]->getName()<<" ";
		cout<<s[i]->getCgpa()<<endl;
	}*/
	return 0;
}
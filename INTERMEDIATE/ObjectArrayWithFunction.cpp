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

void printStudent(Student* s)
{
	cout<<endl<<s->getId()<<" ";
	cout<<s->getName()<<" ";
	cout<<s->getCgpa()<<endl;
}

void printStudentArray(Student* s[])
{
	int i;

	for(i=0; i<3; ++i){
		printStudent(s[i]);
	}
}

int main(){
	Student* s[3];

	int i, id;
	string name;
	float cgpa;

	for(i=0; i<3; ++i){
		cin>>id;
		cin>>name;
		cin>>cgpa;

		s[i] = new Student(id, name, cgpa);
	}
	printStudentArray(s);


	return 0;
}

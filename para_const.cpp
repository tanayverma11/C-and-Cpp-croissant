#include <iostream>
#include <string.h>
using namespace std;

class Student{
	int rno;
	string name;
	public:
	Student(int trno, string Sname){
		rno=trno;
		name=Sname;
	} 
	void display(){cout<<endl<<rno<<"\t"<<name<<endl;} 
	};
	int main(){
		Student s(100,"xara");
		s.display();
		return 0;
	}


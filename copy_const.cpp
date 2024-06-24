#include <iostream>
#include <string.h>
using namespace std;

class Student
{
	int rno;
	string name;
	public:
	Student(int trno, string Sname){
		rno=trno;
		name=Sname;
	} 
	Student(Student &t)
	{
		rno=t.rno;
		name=t.name;
	}
	void display(){cout<<endl<<rno<<"\t"<<name<<endl;} 
	};
	int main(){
		Student s(100,"xara");
		s.display();
		
		Student s1(s);
		s1.display();
		return 0;
	}


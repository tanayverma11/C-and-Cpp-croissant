#include <iostream>
using namespace std;

class vehicle //base clase 
{	
	public:
		virtual void disp(){cout<<"This is a vehicle \n";}	
		void show(){cout<<"This is a vehicle \n";}		
};

class car : public vehicle //derived class
{
	public:
		void disp(){cout<<"This is a car \n";}	
		void show(){cout<<"This is a car \n";}	
};

int main(void){

	vehicle* veh;   //reference of class vehicle (base)
	car c;			//object of class car (derived)

	veh=&c;			/*storing address of derived class
	in a pointer/reference of base class*/
	
	/*here virtual function is called and 
	derived class's version of function gets invoked*/
	veh->disp();
	
	/*the non-virtual function is called and 
	base class's version of function gets invoked*/
	veh->show();	
}

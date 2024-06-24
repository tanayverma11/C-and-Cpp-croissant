#include <iostream>
using namespace std;
class facto {	
	int n;
	public:
		int input(){
		cout<<"Enter a number:\n";
			cin>>n;
			return n;
		}
		int fact(int n) {	
			if(n==0 || n==1)
				return 1;
			return n*fact(n-1);
		}		
};
int main(){
	facto obj;
int n=obj.input();
int x=obj.fact(n);
cout<<"\nFacrorial of "<<n<<" is: "<<x<<"\n";
}


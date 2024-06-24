#include <iostream>
using namespace std;
class table {	
	int n;
	public:
		void calc(){
		cout<<"Enter a number:\n";
			cin>>n;
			for(int i=1; i<11; i++)
				cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
		}		
};
int main(){
	table obj;
	obj.calc();
}


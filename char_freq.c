#include<iostream>
#include<string.h>
using namespace std;
class charFreq{
	char ch;
	int i=0,c=0;
	string s;
	public:
		void fill(){
				cout<<"Enter a sentence: \n";
				getline(cin,s);
				cout<<"\nEnter a character to check it's frequency:\t";
				cin>>ch;
		}
		void freq(string s, char ch) {
			for(i=0; i<strlen(s); i++) 
				if(s[i]==ch)
					c++;	
			if(c>0)
				cout<<"Frequency of "<<ch<<" in \n"<<s<<" is: "<<c<<"\n";
			else
				cout<<"Not Found!";
	}
};

void main() {
	charFreq obj;
	obj.fill();
	obj.freq("",'');
}

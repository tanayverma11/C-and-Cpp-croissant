#include<iostream>
#include<string.h>
using namespace std;
class str1{
	string s;
	int i;
	public:
		void fill() {
			cout<<"Enter a sentence: \n";
			//fgets(s,99,stdin);
			getline(cin,s);
			cout<<"\nSentence in lower case:\t";
			for(i; i<=s.length(); i++) 
			{
				s.at(i)=tolower(s[i]);
				cout<<s[i];
			}
		}
		void Vowel(string s) {
			cout<<"\nVowels in the sentence:\t";
			for(i=0; i<s.length(); i++) 
				if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u')
					cout<<s.at(i);			
		}
		void Consonant(string s) {
			cout<<"\nConsonants in the sentence:\t";
			for(i=0; i<s.length(); i++) 
				if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u'||s.at(i)==' ')
					;
				else
					cout<<s.at(i);
		}	
	};

int main() {
	str1 obj;
	obj.fill();
	obj.Vowel("");
	obj.Consonant("");
}



#include<iostream>
#include<string.h>
class str1{
	char s[99];
	int i=0;
	public:
		void fill() {
			cout<<"Enter a sentence: \n";
			//fgets(s,99,stdin);
			cin>>s;
			cout<<"\nSentence in lower case:\t";
			for(i; i<=strlen(s); i++) 
			{
				s[i]=tolower(s[i]);
				cout<<s[i];
			}
		}
void Vowel(char c[]) {
	cout<<"\nVowels in the sentence:\t";
	for(i=0; i<strlen(s); i++) 
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
				cout<<s[i];			
}
void Consonant(char c[]) {
	cout<<"\nConsonants in the sentence:\t";
	for(i=0; i<strlen(s); i++) 
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		;
		else
			cout<<s[i];
}	
};

void main() {
	fill();
	Vowel(s);
	Consonant(s);
getch();
}



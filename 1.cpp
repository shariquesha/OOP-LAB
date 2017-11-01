//A simple C++ program for counting number of variables
#include<iostream>
using namespace std;

int  main()
{
	int i,j,vowel_count=0;
	char *p;
	cout<<"Enter number of characters"<<endl;
	cin>>i;
	p=new char[i];
	cout<<"Enter the characters"<<endl;
	for(j=0;j<i;j++)
		cin>>p[j];
	
	//cout<<"characters you entered"<<endl;
	//	for(j=0;j<i;j++)
	//	cout<<p[j];
	
	cout<<endl;
	for(j=0;j<i;j++)
	{
		if(*(p+j)=='a'||*(p+j)=='e'||*(p+j)=='i'||*(p+j)=='o'||*(p+j)=='u')
		{
			vowel_count++;	
		}
	}
	cout<<"Number of vowels in the entered chars are "<<vowel_count<<endl;
	return 0;
}

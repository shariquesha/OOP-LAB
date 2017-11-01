#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

class upper{
	private:
		char s[20];
	public:
		upper(char a[]){
			strcpy(s,a);
		}
		void show()
		{
			cout<<s;
		}
		void operator ++(int);
};

void upper ::operator ++(int )
{
	char c;	
	int i=0;
	while(s[i]!=NULL)
	{
		c=s[i];
		s[i]=toupper(c);
		i++;
		
	}
}
int main()
{
	upper s1("sharique");
	s1++;
	s1.show();
}

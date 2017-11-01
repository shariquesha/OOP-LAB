#include<iostream>
using namespace std;
///////////////////////////////////////////////////////////

class counter{
	int count;
	public:
	counter():count(0){}
	void operator ++(){
	count++;
	}
	void operator --(){
	count--;
	}
	int show()
	{
		return count;
	}
};
int main()
{
	counter c1;
	int i;
	cout<<"1-person enters in the bank\n2-person exits from the bank\n3-Exit the program and show the result"<<endl;
	while(1)
	{
		cout<<"Enter your choice"<<endl;
		cin>>i;
		switch(i)
		{
			case 1:
			++c1;
			break;
			case 2:
			--c1;
			break;
			case 3:
			cout<<"total count: "<<c1.show()<<endl;
			return 0 ;
		}
	}
}


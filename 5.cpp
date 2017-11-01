#include<iostream>
#include<string.h>
using namespace std;

class pntr_obj{

	private:
	char *name;
	int roll_no;

	public:
	void set_data(int r,char n[] )
	{
		roll_no=r;
		name = new char[10];
		strcpy(name,n);
	}
	void print()
	{
		if(this->roll_no == 123)
			cout<<"obj1 invoked the fucntion"<<endl;
		else if(this->roll_no == 124)
			cout<<"obj2 invoked the fucntion"<<endl;
		else
			cout<<"obj3 invoked the fucntion"<<endl;
	}
};
int main()
{
	pntr_obj obj1,obj2,obj3;
	obj1.set_data(123,"as1");
	obj2.set_data(124,"as2");
	obj3.set_data(125,"as3");
	obj1.print();
	obj2.print();
	obj3.print();
	}

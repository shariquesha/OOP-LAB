#include<iostream>

using namespace std;

class myclass{
	
	static int count1,count2;
	public:
	myclass(){
		count1++;
		}
	~myclass(){
		count2++;
		}
	void show_count()
		{
		cout<<"total object created"<<count1<<endl;
		cout<<"total object deleted"<<count2<<endl;
		}
};
int myclass::count1=0;
int myclass::count2=0;
int main()
{
	myclass *o1,*o2,*o3,o4;
	o1=new myclass();
	o2=new myclass();
	o3=new myclass();

	delete o1;
	delete o2;
	delete o3;

	o4.show_count();
}


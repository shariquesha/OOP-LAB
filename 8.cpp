#include<iostream>
 using namespace std;
class company{
	int data;
	public:
	company():data(0){}
	company(int a):data(a){}
	void show()
	{
		cout<<data<<endl;
	}
	int operator +(company t)
	{
		company temp;
		temp.data=data+t.data;
		return temp.data;
	}
	int  operator -(company t)
	{
		company temp;
		temp.data=data-t.data;
		return temp.data;
	}
}; 
int main()
{
	company t1(23),t2(24);
	cout<<t1+t2<<endl;
	cout<<t1-t2<<endl;
	return 0;
}

#include<iostream>
using namespace std;
////////////////////////////////
class first{
	int data1;
	public:
	first():data1(0){
	}
	first(int a):data1(a){
	}
	int get_data()
	{
		return data1;
	}
	void show()
	{
		cout<<"first=>"<<data1;
	}
};

class second{
	int data2;
	public:
	second():data2(0){
	}
	second(first); //one argument constructor
	void show()
	{
		cout<<"second=>"<<data2;
	}
};

second::second(first f)
{
	data2=f.get_data();
}
int main()
{
	first f1(10);
	second s1=f1;
	f1.show();
	s1.show();
}

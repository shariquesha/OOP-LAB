#include<iostream>
using namespace std;
class feet
{
	int ft;
	public:
		feet():ft(12){}
		void show1()
		{
			cout<<ft;
		}
		operator inches() const;
};
class inches{
	int in;
	public:
		inches():in(5){}
		void show2()
		{
			cout<<in;
		}
		operator feet() const;
};
	inches::operator feet()
	{
		return obj.in/12;
	} 
	feet::operator inches()
	{
		return obj.ft*12;
	} 
int main()
{
	feet f=i;
	incehs i=f;
	f.show();
	i.show2();
	return 0;
}

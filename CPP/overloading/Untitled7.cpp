#include<iostream>
using namespace std;
class counter{
	private:
		int data;
	public:
		counter(int x):data(x)
		{
		}
		void show()
		{
			cout<<"\n"<<data;
		}
		int operator ++(int );	
};
int counter::operator ++(int)
{
	data++;
	return data;
	
}

int main()
{
	counter c1(0),c2(0);
	c2=c1++;
	c1.show();
	c2.show();
}

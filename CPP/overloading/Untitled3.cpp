#include<iostream>
using namespace std;

class X{
	private :
		int data;
	public:
		X (int x):data(x){
		}
		int print_values()
		{
			cout<<data;
		}
		X operator - (X xx)
		{
			X temp(0);
			temp.data=data-xx.data;
			return temp;
		}
};

int main()
{
	X x1(10),x2(20),x3(0);
	x3=x1-x2;
	x3.print_values();
}



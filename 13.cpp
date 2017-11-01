#include<iostream>
using namespace std;

template <class t>
class temp
{
	t data1;
	t data2;
	public:
	temp(t d1,t d2):data1(d1),data2(d2){}
	t get_max()
	{
		if(data1>data2)
		return data1;
		else 
		return data2;
	}

};

int main()
{
	temp <int>o1(5,3);
	temp <float>o2(5.5,3.5);
	temp <char>o3('a','b');

	cout<<"max of (5,3) = "<<o1.get_max()<<endl;
	cout<<"max of (5.5,3.5) = "<<o2.get_max()<<endl;
	cout<<"max of ('a','b') = "<<o3.get_max()<<endl;
	

	
}

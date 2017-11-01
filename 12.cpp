#include<iostream>
using namespace std;

template <class type>
type minm(type a ,type b)
{
	type minimum;
	if ( a > b )
	minimum=b;
	else
	minimum=a;
	return minimum;
}
int main()
{
	cout<<"min(5,3) = "<<minm(5,3)<<endl;
	cout<<"min(5.3,3.3) = "<<minm(5.3,3.3)<<endl;
	cout<<"min('a','b') = "<<minm('a','b')<<endl;
	return 0;
}

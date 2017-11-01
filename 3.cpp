//Examples of inline function
#include<iostream>
using namespace std;

inline int add_fun(int a ,int b)
{
	return a+b;
}
inline int sub_fun(int a ,int b)
{
	return a-b;
}
inline int mul_fun(int a ,int b)
{
	return a*b;
}
inline int div_fun(int a ,int b)
{
	return a/b;
}
inline int mod_fun(int a ,int b)
{
	return a%b;
}
int main()
{
	cout<<"outputs using inline functions"<<endl;
	cout<<"add 10 and 5 = "<<add_fun(10,5)<<endl;
	cout<<"sub 10 and 5 = "<<sub_fun(10,5)<<endl;
	cout<<"mul 10 and 5 = "<<mul_fun(10,5)<<endl;
	cout<<"div 10 and 5 = "<<div_fun(10,5)<<endl;
	cout<<"mod 10 and 5 = "<<mod_fun(10,5)<<endl;
		
}


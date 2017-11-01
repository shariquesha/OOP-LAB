#include<iostream>
using namespace std;

class beta;
class alpha 
{
	float a,b,c;
	public:
	alpha(float v1,float v2,float v3):a(v1),b(v2),c(v3){}
	friend float friend_func(alpha,beta);
};

class beta
{
	float d,e;
	public:
	beta(float v1,float v2):d(v1),e(v2){}
	friend float friend_func(alpha,beta);

};
float friend_func(alpha x,beta y)
{
	return (x.a+x.b+x.c+y.d+y.e)/5.0;	
}

int main()
{
	alpha a1(1,2.5,3.0);
	beta b1(4.5,4);
	cout<<"Avegrage = "<<friend_func(a1,b1)<<endl;
}

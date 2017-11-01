#include<iostream>
using namespace std;

class c_polygon{
	public:
		virtual float area(float a,float b)
		{}
};
class c_rectangle:public c_polygon{
	public:
		float area(float h,float b)
		{	
			return h*b;
		}
};
class c_trianlge:public c_polygon{
	public:
		float area(float h,float l)
		{
			return 0.5*l*h;
		}
};
int main()
{
	c_rectangle rec1;
	c_trianlge tri1;
	c_polygon *ptr;
	ptr=&rec1;
	cout<<"Area of rectangle:"<<ptr->area(5.3,2.5)<<endl;
	ptr=&tri1;
	cout<<"Area of traingle:"<<ptr->area(2,4.0)<<endl;

	return 0;
}

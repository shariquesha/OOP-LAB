#include<iostream>
#include<math.h>
using namespace std;

class cl_2D
{	
	protected:
	float x,y;
	public:
	cl_2D():x(0),y(0){}
	cl_2D(float x1,float y1):x(x1),y(y1){}
};
class cl_3D:public cl_2D
{
	float z;
	public:
	cl_3D():cl_2D(),z(0){}
	cl_3D(float x1,float y1,float z1):cl_2D(x1,y1), z(z1){}
	float dist(cl_3D,cl_3D);
};
float cl_3D::dist(cl_3D o1,cl_3D o2)
{
	float xd,yd,zd;
	xd=o1.x-o2.x;
	yd=o1.y-o2.y;
	zd=o1.z-o2.z;
	cout<<"A("<<o1.x<<","<<o1.y<<","<<o1.z<<")"<<"\nB("<<o2.x<<","<<o2.y<<","<<o2.z<<")"<<endl;
	//cout<<o1.x<<o2.x<<o1.y<<o2.y<<o1.z<<o2.z<<endl;
	//cout<<xd<<yd<<zd<<endl;
	return sqrt(xd*xd+yd*yd+zd*zd);
}

int main()
{
	cl_3D obj1(1,2,3),obj2(4,5,6),obj3;
	cout<<"Distance Between the points A and B  "<<obj3.dist(obj1,obj2)<<endl;

}

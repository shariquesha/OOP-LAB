#include<iostream>
using namespace std;
class c{
	
	private:
		int data;
	public:
		c(int t):data(t){
		}
		int get_value()
		{
			return data;
		}
		void show()
		{
			cout<<data;
		}
		
};
c operator -(c &a,c &b)
		{
			c temp(a.get_value()-b.get_value());
			return temp;
		
		}
int main()
{
	c obj1(20),obj2(10),obj3(0);
	obj3=obj1-obj2;
	obj3.show();
}

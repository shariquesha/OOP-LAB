#include<iostream>
using namespace std;

class counter{
	private :
		int data;
	public:
		counter():data(0){
		}
		void init_data(int x)
		{
			data=x;
		}
		void show()
		{
			cout<<data;
		}
		void operator ++ ();
		void operator ++ (int);
};
 void counter::operator ++()
 {
 	++data;
 } 
 void counter ::operator ++(int)
 {
 	data++;
 }
 
 int main()
 {
 	counter c1;
 	++c1;
 	c1++;
 	c1.show();
 }

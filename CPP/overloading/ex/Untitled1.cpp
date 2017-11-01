#include<iostream>
using namespace std;
class myclass{
	private:
		int data;
	public:
		myclass(int a):data(a){
		}
		void show()
		{
			cout<<data;
		}
		myclass operator -(myclass);
};

myclass myclass::operator-(myclass x)
{
	myclass temp(0);
	temp.data=data-x.data;
	return temp;
}

int main()
{
	myclass obj1(10),obj2(20),obj3(0);
	obj3=obj2-obj1;
	obj3.show();
	
}

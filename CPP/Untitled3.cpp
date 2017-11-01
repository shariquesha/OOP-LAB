#include<iostream>
#include<stdlib.h>

using namespace std;
class myclass{
	public:
		void * operator new(size_t num)
		{
			cout<<"memory created"<<endl;
			return malloc(num);	
		}
		void operator delete (void *ptr)
		{
			cout<<"memory deleted"<<endl;
			return free(ptr);
		}
};
int main()
{
	myclass *obj;
	obj = new myclass;
	delete obj;
}

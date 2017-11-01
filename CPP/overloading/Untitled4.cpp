#include<iostream>
using namespace std;
class counter{
	private:
		int data;
	public:
		counter():data(10)
		{
		}
		void show()
		{
			cout<<data;
		}
		counter operator --()
		{
			--data;
		}
};

int main()
{
	counter c1;
	--c1;
	--c1;
	c1.show();
}

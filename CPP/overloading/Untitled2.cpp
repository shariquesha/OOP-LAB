#include <iostream>
using namespace std;
class x{
	private:
		int data;
	public:
		int put_value()
		{
			cout<<"\nenter data";
			cin>>data;
		}
		int get_value()
		{
			return data;
		}
		int assign_value(int dat)
		{
			data=dat;
		}
		void print_value()
		{
			cout << "\n"<<data;
		}
	
};

int main()
{
	x x1,x2,x3;
	
	x1.put_value();
	x2.put_value();
	x3.assign_value(x1.get_value()-x2.get_value());
	x3.print_value();
}


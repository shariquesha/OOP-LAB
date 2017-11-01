//Conversion from basic to user defined

#include<iostream>
using namespace std;
class user{
	int data;
	public:
		user():data(0){
		}
		user(int x):data(x){
		}
		void show()
		{
			cout<<data;
		}
		operator int ()
		{
			return data;
		}
};

int main()
{
	int i=10;
	user u1,u2;
	//cout<<"i= "<<i<<"\n";
 	//u1.show();
	u1=i;
	u1.show();
	i=u2;
	cout<<"\n"<<"i= "<<i<<"\n";
}

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
			cout<<"\n"<<data;
		}
		myclass operator += (myclass);
};

myclass myclass::operator +=(myclass s)
{
	myclass temp(0);
	data=data+s.data;
	temp.data=data;
	return temp;
} 

int main()
{
	myclass s1(10),s2(10),s3(0);
	s1+=s2;
	s1.show();
	s2.show();
	s3=s1+=s2;
	s3.show();
}

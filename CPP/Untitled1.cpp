// subscript operator overloading
#include<iostream>
using namespace std;

class array
{
	int a[10];
	public:
		array(){
			int i;
			for(i=0;i<10;i++)
			{
				a[i]=i;
			}
		}
		int &operator[](int i)
		{
			if(i>5)
			//cout<<"Array out of bound"<<endl;
			throw  a[i];
		}	
};
int main(){
	try{
		array obj;
		int i;
		for(i=0;i<10;i++)
		cout<<obj[i]<<endl;
	}
	catch(int i)
	{
		cout<<"Array bound overflow:"<<i<<endl;
	}
	return 0;
}

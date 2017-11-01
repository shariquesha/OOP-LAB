#include<iostream>
using namespace std;

class student
{
	char name[10];
	int rollno;
	char clas[5];
	
	public :
	//student():name(0),rollno(0),clas(0){}
	
	friend istream& operator >>(istream& in,student& obj)
	{
		cout<<"enter name rollno and class"<<endl;
		in>>obj.name>>obj.rollno>>obj.clas;
		return in;
	}
	friend ostream& operator <<(ostream& out,const student& obj)
	{
		out<<obj.name<<" "<<obj.rollno<<" "<<obj.clas<<endl;
		return out;
	}
};


int main()
{
	student obj;
	cin>>obj;
	cout<<"name rollno class"<<endl;
	cout<<obj<<endl;
}

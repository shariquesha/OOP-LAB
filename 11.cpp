#include<iostream>
#include<string.h>
using namespace std;

class student
{
	char name[10];
	int marks1,marks2,marks3;
	public:
	void get_data(char n[10],int m1,int m2,int m3)
	{
		strcpy(name,n);
		marks1=m1;
		marks2=m2;
		marks3=m3;
	}
	void display()
	{
		cout<<"name "<<name<<endl;
		cout<<"marks 1: "<<marks1<<endl;
		cout<<"marks 2: "<<marks2<<endl;
		cout<<"marks 3: "<<marks3<<endl;
	}
	friend class marks;
};	
class marks
{
	public:
	int avg_marks(student s1)
	{
		return (s1.marks1+s1.marks2+s1.marks3)/3;
	}
};

int main()
{
	student s2;
	marks m1;
	s2.get_data("sharique",10,20,30);
	s2.display();
	cout<<"Average Marks = "<<m1.avg_marks(s2)<<endl;
}

//Overloaded matrix multiplication

#include<iostream>
#include<stdlib.h>

using namespace std;

class matrix
{
	int mat[3][3];

	public:

	matrix()
	{
	int i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	mat[i][j]=0;
	}
	void put_data()
	{
		int i,j;
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		mat[i][j]=rand()%3;
	}
	void show()
	{
		int i,j;
		for(i=0;i<3;i++)
		{	
			cout<<endl;
			for(j=0;j<3;j++)
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	matrix operator+(matrix t)
	{
		int i,j;
		matrix temp;
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		temp.mat[i][j]=mat[i][j]+t.mat[i][j];
		return temp;
	}
	matrix operator*(matrix t)
	{
		int i,j,k;
		matrix temp;
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			temp.mat[i][j]=0;
			for(k=0;k<3;k++)
				temp.mat[i][j]+=mat[i][k]*t.mat[k][j];
		}
		return temp;
	}
	void  operator =(matrix t)
	{
		int i,j;
		matrix temp;
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		mat[i][j]=t.mat[i][j];
	}	

};
int main()
{
	matrix m1,m2,m3;
	m1.put_data();
	m2.put_data();
	cout<<"Matrix 1"<<endl;
	m1.show();
	cout<<"Matrix 2"<<endl;
	m2.show();
	cout<<"After Addition"<<endl;	
	m3=m1+m2;
	m3.show();
	cout<<"After multiplicaiton"<<endl;
	m3=m1*m2;
	m3.show();
	
	

}

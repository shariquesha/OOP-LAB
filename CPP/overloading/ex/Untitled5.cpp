#include<iostream>
using namespace std;
class time{
	private:
	int hr,min,sec;
	public:
	time():hr(0),min(0),sec(0){
	}
	time(int h,int m,int s):hr(h),min(m),sec(s){
	}
	void show(){
		cout<<"\n"<<hr<<":"<<min<<":"<<sec;
	}
	time operator ++ ()
	{
		++hr;
		++min;
		++sec;
	}
	time operator ++ (int)
	{
		hr++;
		min++;
		sec++;
	}
	time operator -- ()
	{
		--hr;
		--min;
		--sec;
	}
	time operator -- (int)
	{
		hr--;
		min--;
		sec--;
	}
};
int main(){
	time t1(1,2,2),t2(2,3,3);
	t1--;
	t1.show();
	--t1;
	t1.show();
	t2++;
	t2.show();
	++t2;
	t2.show();
}

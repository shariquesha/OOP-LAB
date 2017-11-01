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
		cout<<hr<<":"<<min<<":"<<sec;
	}
	time operator + (time t)
	{
		time temp;
		temp.hr=hr+t.hr;
		temp.min=min+t.min;
		temp.sec=sec+t.sec;
		return temp;
	}
};
int main(){
	time t1(1,2,2),t2(2,3,3),t3;
	t3=t1+t2;
	t3.show();
}

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
	time operator - (time ss){
		time temp;
		temp.hr=hr-2*ss.hr;
		temp.min=min-2*ss.min;
		temp.sec=sec-2*ss.sec;
		return temp;
		
	}
	time operator * (time ss){
		time temp;
		temp.hr=hr*ss.hr;
		temp.min=min*ss.min;
		temp.sec=sec*ss.sec;
		return temp;
		
	}
};
int main(){
	time t1(1,2,2),t2(2,3,3),t3;
	t3=t2-t1;
	t3.show();
	t3=t1*t2;
	t3.show();
	
}

 #include<iostream>
 using namespace std;
////////////////////////////////////////////////
 class test{
 	long double data;
 	public:
 		test():data(0){
 		}
 		test(int a):data(a){
 		}
 		void show()
 		{
 			cout<<"\n"<<data;
 		}
 		long double operator + (test t){
 			return data+t.data;
 		}
 		long double operator - (test t){
 			return data-t.data;
 		}
 		long double operator * (test t){
 			return data*t.data;
 		}
 		long double operator / (test t){
 			return data/t.data;
 		}
 };
 int main()
 {
 	test t1(100000),t2(234567888),t3;
 	t3=t1+t2;
 	t3.show();
 	t3=t1-t2;
 	t3.show();
 	t3=t1*t2;
 	t3.show();
 	t3=t1/t2;
 	t3.show();
 }

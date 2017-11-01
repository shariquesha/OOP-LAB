  #include <iostream>
  #include <string.h>
  #include <math.h>
  using namespace std;
  void reverseWithoutReturn(int);
  int reverseWithReturn(int);

  int reverseNumber[10];
  int main()
  {
  	int number;
  	int i;

  	cout <<"Enter the number: "<<endl;

  	cin >> number ;

  	cout << "Output using function without return: ";
  	reverseWithoutReturn(number);

  	cout << "Output using function with return: ";
  	int numberReverse = reverseWithReturn(number);
  	cout << numberReverse <<endl;
  	return 0;
  }

  void reverseWithoutReturn( int number)
  {
  	while ( number )
  	{
  		cout << number % 10;
  		number = number / 10;
  	}
  	cout << endl;
  }

  int reverseWithReturn( int number )
  {
  	int i = 0 ;
  	int reverseNumber[10];
  	int numberReverse;
  	while ( number )
  	{
  		reverseNumber[i++] =  number % 10;
  		number = number / 10;
  	}

  	int j = 0 ;
  	int k = 0 ;
  	for ( j = i - 1 ; j >= 0 ; j-- )
  	{
  		numberReverse = numberReverse + reverseNumber[k] * pow(10,j);
  		k++;
  	}
  	return numberReverse;
  }

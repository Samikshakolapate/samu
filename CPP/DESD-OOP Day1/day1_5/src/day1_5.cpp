//============================================================================
// Name        : day1_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void print(int a=10,int b=20,int c=30,int d=40)
{
	cout<<"A="<<a;
	cout<<"B="<<b;
	cout<<"C="<<c;
	cout<<"D="<<d;
	cout<<endl;
}

int main()
{
	print();
	print(11);
	print(22,33);
	print(100,200,300);
	print(1000,2000,3000,4000);

	return 0;
}

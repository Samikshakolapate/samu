//============================================================================
// Name        : day2_7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main( void )
	{
		int arr1[ 3 ] = { 10, 20, 30 };

		int (&arr2)[ 3 ] = arr1;
		//arr1 is holding base address of array arr1
		//(&arr2) is also pointing to base address of arr1
		//because (&arr2)[3] is reference array
		for( int index = 0; index < 3; ++ index )
			cout<<arr2[ index ]<<endl;
	return 0;
	}



/*int main()
{

	int a=100;
	int &r=a;
	cout<< " a = "<<a <<" &a "<<&a<<endl;
	cout<< " r = "<<r <<" &r "<<&r<<endl;
	a++;
	cout<<"\n after incrementing a\n";
	cout<< " a = "<<a <<" &a "<<&a<<endl;
	cout<< " r = "<<r <<" &r "<<&r<<endl;
	r++;
	cout<<"\n after incrementing r\n";
	cout<< " a = "<<a <<" &a "<<&a<<endl;
	cout<< " r = "<<r <<" &r "<<&r<<endl;
	return 0;
}*/

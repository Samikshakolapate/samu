//============================================================================
// Name        : day3_10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		this->x=0;
		this->y=0;
	}

	Point(int x,int y)
		{
			this->x=x;
			this->y=y;
		}

	//operator+ function as a member function of the class

	Point operator+(Point &other)
	{
		Point res;
		res.x=this->x+other.x; //this is my pt1 object and other is my pt2 object
		res.y=this->y+other.y;
		return res;
	}

	void print()
	{
		cout<<"\n X= "<<this->x;
		cout<<"\n Y= "<<this->y;
	}

};








::


int main()
{
	Point pt1(10,20);
	pt1.print();
	Point pt2(30,40);
	pt2.print();
	Point pt3=pt1+pt2; //pt3= pt1.operator+(pt2)
	pt3.print();



	return 0;
}

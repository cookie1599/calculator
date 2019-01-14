#include<iostream>
#include<stdlib.h>
using namespace std;

class calculator
{
	int x,y,z;
	public:
	int add(int a,int b)
	{
		return a+b;
	}
	int multiply(int a,int b)
	{
		return a*b;
	}
	int divide(int a,int b)
	{
		return a/b;
	}
	int power(int a,int b)
	{
		int c=1;
		for(int i=0;i<b;i++)
		{
			 c = c*a;
		}
		return c;
	}
};
int main(int argc,char *argv[])
{
	int x,y;
	if(argc>1)
	{
	x=atoi(argv[1]);y=atoi(argv[2]);
	}
	else
	{
	cout<<"Enter X variable ";
	cin>>x;
	cout<<"Enter Y variable ";
	cin>>y;
	}
	calculator c;
	int a = c.add(x,y);
	cout<<"The Sum of the numbers are : "<<a<<"\n";
	a = c.multiply(x,y);
	cout<<"The multiplication of numbers are : " <<a<<"\n";
	a = c.divide(x,y);
	cout<<"The Division of Numbers are : "<<a<<"\n";
	a = c.power(x,y);
	cout<<x<<" Power "<<y<<" Is "<<a<<"\n";
	cout<<"===============================\n";
	cout<<"|    Create by: cookie1599    |\n";
	cout<<"===============================";
	return 0;
}

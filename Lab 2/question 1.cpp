#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char op;
	cout<<"Enter two integers : ";
	cin>>a>>b;
	cout<<"Enter operation which you want to perfom : ";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<"Addition of two numbers is : "<<a+b;
			break;
		case '-':
			cout<<"subtraction of two numbers is : "<<a-b;
			break;
		case '*':
			cout<<"Multiplication of two numbers is : "<<a*b;
			break;
		case '/':
			cout<<"Division of two numbers is : "<<a/b;
			break;
		default :
			cout<<"invalid input ";
			
	}
	return 0;
}

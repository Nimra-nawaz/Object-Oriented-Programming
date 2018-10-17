#include<iostream>
using namespace std;
int main()
{
	float cent, fah;
	cout<<"Enter temperature in Centigrade : ";
	cin>>cent;
	fah=(1.8 * cent) + 32;
	cout<<"\nTemperature in Fahrenheit = "<<fah;
	return 0;
}

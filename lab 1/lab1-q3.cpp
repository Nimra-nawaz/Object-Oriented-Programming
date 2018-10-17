#include<iostream>
using namespace std;
int main()
{
	float leng,width,heig, volume;
	cout<<"Enter length of the single side of box : ";
	cin>>leng;
	cout<<"Enter width of the single side of box : ";
	cin>>width;
	cout<<"Enter height of the single side of box : ";
	cin>>heig;
	volume=leng*width*heig;
	cout<<"Volume of box is : "<<volume;
	return 0;
}

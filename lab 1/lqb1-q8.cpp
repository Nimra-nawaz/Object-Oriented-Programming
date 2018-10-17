#include <iostream>
using namespace std;

int main()
{
   char ch[5];
   
   for(int i=0; i<5; i++)
   {
   cout<<"\nEnter a character in uppercase: "; 
   cin>>ch[i];
   ch[i]=ch[i]+32;
   cout<<"\ncharacter in lowercase: "<<ch[i];
	}
   return 0;
}

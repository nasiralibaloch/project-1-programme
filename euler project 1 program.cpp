#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int count=0;
	int k;
	
	for(k=1; k<=1000; k++)
	{
	if(k%3==0&&k%5==0)
		count=count+1;
	}
	
		cout<<"total is"<<count;
	
	return 0;
}

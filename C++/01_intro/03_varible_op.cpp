#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"Enter your A : ";
//	scanf("%d",&a);
	cin>>a;
	
	cout<<"A : "<<a;
	cout<<"\nEnter your B : ";
	cin>>b;
	cout<<"B : "<<b;
	
	cout<<"\n----total Caluc----";
	cout<<"\nSum : "<<a+b;
	cout<<"\nSub : "<<a-b;
	cout<<"\nMul : "<<a*b;
	cout<<"\ndivi : "<<a/b;
	
	return 0;
}

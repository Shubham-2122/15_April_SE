#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"Enter your A : ";
	cin>>a;
	
	cout<<"Enter your B : ";
	cin>>b;
	
	cout<<"Enter your c : ";
	cin>>c;
	
	cout<<"A : "<<a;
	cout<<"\nB : "<<b;
	cout<<"\nC : "<<c;
	
	if(a>b && a>c){
		cout<<"\nA is Max :"<<a;
	}
	else if(b>c){
		cout<<"\nB is Max :"<<b;
	}
	else {
		cout<<"\nC is Max :"<<c;
	}
	
	return 0;
}

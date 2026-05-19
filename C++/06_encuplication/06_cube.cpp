#include<iostream>
using namespace std;

inline int squar(int x){
	return x*x*x;
}

int main()
{
	int num;
	cout<<"Enter your Number :";
	cin>>num;
	cout<<"\nYour Number : "<<num;
	cout<<"\nCube finde :"<<squar(num);
	
	
	return 0;
}

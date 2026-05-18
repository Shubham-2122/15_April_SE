/*
1)Comiple time error : method overloading : class only one and funtion name same but deffrenet is paramter

*/
#include<iostream>
using namespace std;

class OverLoad{
	public:
		int display(int x){
			cout<<"\n X : "<<x;
		}
		int display(int x,int y){
			cout<<"\nSum :"<<x+y;
		}
		int display(int x,int y,int z){
			cout<<"\nSub :"<<x-y;
			cout<<"\nZ :"<<z;
		}
};

int main()
{
	OverLoad ob;
	ob.display(10);
	ob.display(10,20);
	ob.display(10,20,30);
	
	return 0;
}

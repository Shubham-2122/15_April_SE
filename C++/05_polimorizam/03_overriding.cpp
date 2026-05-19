/*
		2) Runtime error : method overriding : deffernt class hava function name same it's called over riding

*/
#include<iostream>
using namespace std;

class A{
	public:
		void display(){
			cout<<"\n Hello this A class";
		}
};

class B : public A{
	public:
		void display(){
			cout<<"\n Hello this B class";
		}
};

int main()
{
	B ob;
	ob.display();
	
//	Scope resolve prenet direct call
	ob.A::display();
	ob.display();
	
	
	return 0;
}

/*
	class A{
		property
	}
	class B : public A{
		property
	}
	
*/
#include<iostream>
using namespace std;

class A{
	public:
		void data(){
			cout<<"\nClass A Function";
		}
		void demo(){
			cout<<"\nHello Demo Function";
		}
};

class B : public A{
	public:
		void data1(){
			cout<<"\nClass B Function";
		}
};

int main(){
	
	B ob;
	ob.data1();
	ob.data();
	ob.demo();
	
	
	return 0;
}



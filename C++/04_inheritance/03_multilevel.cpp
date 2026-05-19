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

class C : public B{
	public:
		void Nav(){
			cout<<"\nClass C Function";
		}
};

int main(){
	
	C ob;
	ob.data1();
	ob.Nav();
	ob.data();
	
	
	return 0;
}



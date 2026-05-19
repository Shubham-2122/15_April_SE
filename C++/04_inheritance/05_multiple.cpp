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

class B {
	public:
		void data1(){
			cout<<"\nClass B Function";
		}
};

class C : public A, public B{
	public:
		void Nav(){
			cout<<"\nClass C Function";
		}
};

int main(){
	
	C ob;
	ob.demo();
	ob.Nav();
	ob.data1();

	
	return 0;
}



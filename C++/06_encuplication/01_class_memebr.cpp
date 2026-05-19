#include<iostream>
using namespace std;

class prerent{
	protected:
		int a;
};


class Child : public prerent{
	public:
		void display(){
			cout<<"Enter your A :";
			cin>>a;
		}
		void show(){
			cout<<"A :"<<a;
		}
};

int main()
{
	Child d;
	d.display();	
	
	d.show();
	return 0;
}

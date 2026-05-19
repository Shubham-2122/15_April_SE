#include<iostream>
using namespace std;

class Shubham{
	private:
		int money = 500;
	public:
		void data(){
			cout<<"\nshubham money :"<<money;
		}
		friend class Abhinav;
};

class Abhinav : public Shubham{
	public:
		void show(){
			cout<<"Abhinav your money :"<<money;
		}
};

int main()
{
	Abhinav a;
	a.show();
	a.data();
	
	return 0;
}

#include<iostream>
using namespace std;

class Shubham{
	private:
		int money = 500;
	public:
		friend void parth(Shubham s);
};

void parth(Shubham s){
	cout<<"Parth your money : "<<s.money;
}

int main()
{
	Shubham s1;
	parth(s1);
	return 0;
}

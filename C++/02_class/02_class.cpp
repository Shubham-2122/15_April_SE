#include<iostream>
using namespace std;

class Student{
	private:
//		Data memebr
		int Rollno;
		string name;
	public:
//		member function
		void putData(){
			cout<<"Enter your ROll no:";
			cin>>Rollno;
			cout<<"Enter your Name :";
			cin>>name;
		}
		void display(){
			cout<<"\nYour Rollno :"<<Rollno;
			cout<<"\nYour Name :"<<name;
		}
};

int main()
{
	Student hasya;
	hasya.putData();
	hasya.display();
	
	return 0;
}

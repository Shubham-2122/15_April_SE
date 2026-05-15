#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		string name;
	public:
//		defualt automactily
		Student(){
			cout<<"Enter your Roll no :";
			cin>>rollno;
			cout<<"Enter your Name :";
			cin>>name;
		}
		void display(){
			cout<<"\nYour rollno :"<<rollno;
			cout<<"\nYour Name :"<<name;
		}
};

int main()
{
	Student s;
	s.display();
	
	Student s1;
	s1.display();
	
	return 0;
}

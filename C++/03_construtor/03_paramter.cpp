#include<iostream>
#include<cstring>
using namespace std;

class Student{
	private:
		int rollno;
		char name[20];
	public:
//		1)defualt automactily
		Student(){
			cout<<"Enter your Roll no :";
			cin>>rollno;
			cout<<"Enter your Name :";
			cin>>name;
		}
// 		2)parameter 
		Student(int r,char s[20]){
			rollno = r;
			strcpy(name,s);
		}

		void display(){
			cout<<"\nYour rollno :"<<rollno;
			cout<<"\nYour Name :"<<name;
		}
};

int main()
{
//	1) defualt
	Student s;
	s.display();
		
//  2) paramter
	Student s1(7,"ketan");
	s1.display();
	
			

	return 0;
}

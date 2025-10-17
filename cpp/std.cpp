#include<iostream>
using namespace std;
class Student
{
   	
	public:
		int id;
		char name[10];
		void get()
		{
			cout<<"enter id";
			cin>>id;
			cout<<"enter name";
			cin>>name;	
		}
};
int main()
{

 Student S;
 S.get();
 return 0;
}

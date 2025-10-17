#include<iostream>
using namespace std;
class Student
{
   	
	public:
		int id;
		
		void get()
		{
			cout<<"enter id";
			cin>>id;
				
		}
		void show()
		{
			cout<<"student id is"<<id<<endl;
		}
};
int main()
{
	int i;
	Student s[5];
	for(i=0;i<=5;i++)
	{
		s[i].get();
	}
	for(i=0;i<=5;i++)
	{
		s[i].show();
	}		
}

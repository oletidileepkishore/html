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
 Student S;
 S.get();
 S.show();
 return 0;
}

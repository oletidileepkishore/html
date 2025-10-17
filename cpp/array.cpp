#include<iostream>
using namespace std;
class student{
private:
	char name[10];
	int rollno;
	int sec;
	public:
		void getdata()
		{
			cout<<"enter the name,rollno,sec"<<endl;
			cin>>name>>rollno>>sec;
		}
		void printdata()
		{
			cout<<"name="<<name<<"rollno="<<rollno<<"sec="<<sec<<endl;
		}
	};
		int main()
		{
			student s[3];
			int i;
			for(i=0;i<3;i++)
			{
				s[i].getdata();
			}
			for(i=0;i<3;i++)
			{
				s[i].printdata();
			}
			return 0;
		}

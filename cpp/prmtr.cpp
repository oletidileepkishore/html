#include<iostream>
using namespace std;
class student
{
	public:
		int x;
		void get(int n)
		{
			x=n;
		}
		int show()
		{
			return 0;
		}
};
int main()
{
	int x,n;
	student s;
	cout<<"enter n value"<<n;
	cin>>n;
	s.get(n);
	x=s.show();
	cout<<"x"<<x;
}


#include<iostream>
using namespace std;
class cse6
{
	int i;
	public: void seti(int n){i=n;}
	       void geti(){cout<<"i="<<i<<endl;}
};
cse6 newfun()
{
	cse6 x;
	x.seti(10);
	return x;
}
cse6 oldfun()
int main()
{
	cse6 obj;
	obj=newfun();
	obj.geti();
	return 0;
}

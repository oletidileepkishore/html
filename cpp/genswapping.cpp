#include<iostream>
using namespace std;
template<typename Gen>
void swap(Gen a, Gen b)
{
	Gen temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"a="<<a<<"b="<<b<<endl;
}
int main()
{
	swap(28,75);
	swap(10.5,71.55);
	swap('p','q');
	return 0;
}

#include<iostream>
using namespace std;
class A{
	int a;
	public: A()	{
	 a=10;
	cout<<"default constructor activated...."<<endl;
}

A (int b){
     a=a+b;
     cout<<"value of a="<<a<<endl;
 }
 A(int x,double y)
 {
 	cout<<"x="<<x<<endl;
 	cout<<"y"<<y<<endl;
 }
};
int main()
{
	A obj1, obj2(20),obj3(30,57.85);
	return 0;
}

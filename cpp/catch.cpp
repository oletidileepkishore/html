#include<iostream>
using namespace std;
void test(int x)
{
	try{
		if(x==0) throw x;
		else if(x==1) throw 'a';
		else if(x==2) throw 4.5;
		else if(x==3) throw "string is thrown";
	}
	catch(int) {
	  cout<<"caught an integer exception"<<endl;
}
	catch(char)
	{
		cout<<"caught a character exception"<<endl;
	 } 
	catch(double)
	{
		cout<<"caught a double exception"<<endl;
	}
	catch(const char*)
	{
		cout<<"caught a string exception"<<endl;
	}
}
int main()
{
	test(0);
	test(1);
	test(2);
	test(3);
	return 0;
}








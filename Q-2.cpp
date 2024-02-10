#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << "enter the a:" << endl;
	cin >> a;
	
	cout << "enter the b:" << endl;
	cin >> b;
	
	cout << "enter the c:" << endl;
	cin >> c;
	
	if(a==b && b==c && c==a)
	{
		cout << "All are same....." <<endl;
	}
	
	else if(a < b && b < c)
	{
		cout << "Small number is a:" << a << endl;
	}
	else if(b < a && b < c)
	{
		cout << "Small number is b:" << b << endl;
	}
	else
	{
		cout << "Small number is c:" << c << endl;
	}
	
	return 0;
}

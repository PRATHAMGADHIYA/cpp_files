#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << "Enter Base Amount:" <<endl;
	cin >> a;
	
	cout << "Enter GST:" <<endl;
	cin >> b;
	
	c = a +(a * b / 100);
	cout << "Total Bill Amount : "<< c << endl;
	
	return 0;
}

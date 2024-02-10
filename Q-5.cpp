#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int choice;
	
	cout << "enter the value of a:" << endl;
	cin >> a;
	
	cout << "enter the value of b:" << endl;
	cin >> b;
	
	cout << "Press1 for +:" << endl;
	cout << "Press1 for -:" << endl;
	cout << "Press1 for *:" << endl;
	cout << "Press1 for /:" << endl;
	cout << "Press1 for %:" << endl;
	
	cout << "enter your choice" << endl;
	cin >> choice;
	
		
	switch(choice)
	{
		case 1:
			c = a + b;
			cout << "The addition of is :" << c << endl;
			break;
	
	
		case 2:
				c = a - b;
		        cout << "The subtraction of is :"  << c << endl;
		        break;
	
	
		case 3:
				c = a * b;
		    	cout << "The multiply of is :" << c  << endl;
			    break;
	
	
		case 4:
				c = a / b;
			    cout << "The division of  is :"  << c << endl;
			    break;
	
	
		case 5:
				c = a % b;
			    cout << "The modula of is :" << c << endl;
			    break;
			
		default:			   
		       cout << "invalid choice..." << endl ;
	}	
		
	return 0;
}

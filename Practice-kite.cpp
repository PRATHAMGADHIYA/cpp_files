#include<iostream>
using namespace std;

int main()
{
	int i,j,s;
		
	for(i=1;i<=5;i++)
	{
	  	for(s=1;s<=5-i;s++)
		{
	  		cout <<" ";
		}
				for(j=i;j>=1;j--)
				{
					cout <<j;
				}
				for(j=2;j<=i;j++)
				{
                    cout <<j;
				}
				cout <<endl;
			}
			
		for(i=4;i>=1;i--)
		{
	  	    for(s=1;s<=5-i;s++)
		    {
	  	        cout <<" ";
			}
				for(j=i;j>=1;j--)
				{
				cout << j;
				}
				for(j=2;j<=i;j++)
				{
				  cout << j ;
				}
				cout << endl;
			}
  			cout <<"   212" << endl;
   		    cout <<"  32123" <<endl;
			cout << endl;	
			
						
}

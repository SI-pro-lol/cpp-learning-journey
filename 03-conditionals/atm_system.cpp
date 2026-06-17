#include <iostream>
using namespace std;

int main()
{
	int pin;
	int i=1;
	int option=0;
	int balance=1000;
	int difference;
	
	while (i<4)
	{
		cout<<"Enter the pin ";
		cin>>pin;
		if (pin==1234)
		{
			while (option!=4)
			{				
				cout<<"1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\nWhich option would you like to perform now respected user?"<<endl;
				cin>>option;
				if (option==1)	cout<<"Your current bank balance is "<<balance<<endl;
				else if (option==2)
				{
					cout<<"Enter the amount being deposited: ";
					cin>>difference;
					balance=balance+difference;
					cout<<"The amount has been added!"<<endl;
				}
				else if (option==3)
				{
					cout<<"Enter the amount being withdrawn: ";
					cin>>difference;
					if (difference>balance)	cout<<"Insufficient Funds!"<<endl;
					else
					{
					balance=balance-difference;
					cout<<"The amount has been redacted!"<<endl;
					}
				}
				else if (option>4) return 1;
			}
			return 0;
		}
		else
		{
			int remained=3-i;
			if (remained==0)	i++;
			else
			{
				cout<<"Incorrect PIN, " << remained << " attemps remaining."<<endl;
				i++;
			}
		}
	}
	cout<<"Account Locked!"<<endl;
	return 1;		
}

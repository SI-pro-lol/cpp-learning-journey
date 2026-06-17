#include <iostream>
using namespace std;

int main() 
{
	char from;
	char to;
	float initial_value;
	float final_value;
	
	cout<< "Welcome to the Americans VS the rest of the world unit converter with our temperature special!!! (We deal in C,F,K)\n";	
	cout<<"Enter the initial unit: ";
	cin>>from;
	if (from!='C' && from!='K' && from!='F')
	{
		cout<<"Sorry either you can't read our area of working, mentioned above in the first fking line or... there is no or. You're stupid";
		return 1;
	}
	cout<<"Enter the value: ";
	cin>>initial_value;
	
	cout<<"Enter the final unit: ";
	cin>>to;	
	
	if (from=='C')
	{
		if (to=='K')
		{
			final_value=initial_value+273;
		}
		else if (to=='F')
		{
			final_value=(initial_value*1.8)+32;
		}
	}
	else if (from=='K')
	{
		if (to=='C')
		{
			final_value=initial_value-273;
		}
		else if (to=='F')
		{
			final_value=((initial_value-273)*1.8)+32;
		}
	}
	else if (from=='F')
	{
		if (to=='C')
		{
			final_value=(initial_value-32)*(5.0/9.0);
		}
		else if (to=='K')
		{
			final_value=((initial_value-32)*(5.0/9.0))+273;
		}
	}
	cout<<"The final value in the unit you requested is "<<final_value;
	return 0;
}

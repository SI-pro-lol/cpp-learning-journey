#include <iostream>
using namespace std;
int main()
{
	int fdn;
	int D1;
	int D2;
	int D3;
	int D4;
	int odd_count;
	int sum;
	int max;
	
	max=0;
	odd_count=0;
	cout<<"Enter a '4' digit Number: ";
	cin>>fdn;
	if (fdn>9999 or fdn<1000)
	{
		cout<<"I'm dissappointed.";
		return 1;
	}
	else
	{
		D4=fdn%10;
		fdn=fdn/10;
		
		D3=fdn%10;
		fdn=fdn/10;
		
		D2=fdn%10;
		fdn=fdn/10;
		
		D1=fdn%10;
		fdn=fdn/10;
		
		sum=D1+D2+D3+D4;
		
		if (D1%2!=0)
		{
			odd_count+=1;
		}
		
		if (D2%2!=0)
		{
			odd_count+=1;	
		}
		
		if (D3%2!=0)
		{
			odd_count+=1;
		}
		
		if (D4%2!=0)
		{
			odd_count+=1;	
		}
		
		if (D1>max)
		{
			max=D1;	
		}
		
		if (D2>max)
		{
			max=D2;
		}
		
		if (D3>max)
		{
			max=D3;
		}
		
		if (D4>max)
		{
			max=D4;	
		}
		
		cout<<"The individual digits are: "<<D1<<","<<D2<<","<<D3<<","<<D4<<endl;
		cout<<"Sum of digits: "<<sum<< endl;
		cout<<"Largest digit: "<<max<<endl;
		cout<<"Number of odd digits: "<<odd_count<<endl;
	}
	return 0;
}

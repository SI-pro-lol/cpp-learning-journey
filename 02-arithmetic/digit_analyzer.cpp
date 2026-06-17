#include <iostream>
using namespace std;

int main()
{
	long long number;
	int current;
	cout<<"Enter any Positive integer ";
	cin>>number;
	int counter=0;
	int sum=0;
	int max=0;
	int min=9;
	int odd_counter=0;
	int even_counter=0;
	while (number!=0)
	{
		current=number%10;
		number=number/10;
		sum+=current;
		counter++;
		if (current<min)	min=current;
		if (current>max)	max=current;
		if (current%2==0)	even_counter++;
		else	odd_counter++;
	}
	cout<<"The total digits in the number were "<<counter<<endl;
	cout<<"The sum of all individual digits was "<<sum<<endl;
	cout<<"The max value digit was "<<max<<endl;
	cout<<"The min value digit was "<<min<<endl;
	cout<<"The number of odd digits was "<<odd_counter<<endl;
	cout<<"The number of even digits was "<<even_counter<<endl;	
	return 0;
}

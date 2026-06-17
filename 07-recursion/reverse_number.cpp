#include <iostream>
using namespace std;

int POT(int n)
{
    if (n==0) return 1;
    return 10*POT(n - 1);
}

int reved(int num)
{
	if (num==0)
	{
		return 0;
	}
    if (num>9)
    {
    	int counter=0;
    	int copy=num;
    	while (copy>9)
    	{
    		copy/=10;
    		counter++;
		}
		return ((num%10)*(POT(counter)))+reved(num/10);
	}
	return num+reved(num/10);
}

int main()
{
    int num;
    cin>>num;
    cout<<reved(num);
    return 0;
}

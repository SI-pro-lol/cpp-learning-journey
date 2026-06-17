#include <iostream>
using namespace std;

int fact(int num)
{
	if (num==1)
	{
		return 1;
	}
	return num*fact(num-1);
}

int main()
{
	int num;
	cout<<"Please enter the number for which you must get a factorial!!"<<endl;
	cin>>num;
	int result=fact(num);
	cout<<"The factorial of "<<num<<" is "<<result<<endl;
	return 0;
}

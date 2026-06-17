#include <iostream>
using namespace std;

int main()
{
	for (int i=1;i<=5;i++)
	{
		for (int space=0;space<(5-i);space++)
		{
			cout<<' ';
		}
		for (int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}

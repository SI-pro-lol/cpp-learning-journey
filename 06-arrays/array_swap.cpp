#include <iostream>
using namespace std;

int main()
{
	int numbers[2]={2,5};
	for (int i=0;i<2;i++)
	{
		cout<<numbers[i]<<' ';
	}
	cout<<endl;
	int temp=numbers[0];numbers[0]=numbers[1];numbers[1]=temp;
	for (int i=0;i<2;i++)
	{
		cout<<numbers[i]<<' ';
	}
	return 0;
}

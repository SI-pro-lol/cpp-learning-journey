#include <iostream>
using namespace std;

int yo(int num)
{
	if (num==0)
	{
		cout<<"Blastoff!";
		return 1;
	}
	cout<<num<<endl;
	return yo(num-1);
}

int main()
{
	int num;
	cout<<"Countdown from when SIRE?!"<<endl;
	cin>>num;
	if (num>1000)
	{
		cout<<"Abe chuchu agar itna lamba timer lagana hai to \nbaad mein laga lio abhi ja unde kha (-_-)"<<endl;
		return 1;
	}
	cout<<endl;
	yo(num);
	return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int sec_num=(rand()%100)+1;
	
	int guess=0;
	int g_counter=0;
	while (true)
	{
		cout<<"Enter a Number!(Hint it's in the 1-100 range)"<<endl;
		cin>>guess;
		g_counter++;
		if (guess>sec_num)	cout<<"Try a lower number."<<endl;
		else if (guess<sec_num)	cout<<"Try a higher number."<<endl;
		else
		{
			cout<<"Amazing! You found the secret number in "<<g_counter<<" attempts!"<<endl;
			return 0;
		}
	}
	return 0;
}

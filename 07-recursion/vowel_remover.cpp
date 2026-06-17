#include <iostream>
using namespace std;

int main()
{
	string word;
	cin>>word;
	int limit=word.length()-1;
	for (int i=0;i<=limit;i++)
	{
		if (word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U' || word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u');
		else cout<<word[i];
	}
	return 0;
}

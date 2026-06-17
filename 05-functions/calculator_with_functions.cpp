#include <iostream>
using namespace std;

int add(int a, int b){return a+b;}
int diff(int a, int b){return a-b;}
int prod(int a, int b){return a*b;}
float div(float a, float b){return a/b;}

int main()
{
	int operation;
	float a;
	float b;
	cout<<"Which operation would you like to perform?\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nAnd also enter the two numbers being operated on."<<endl;
	cin>>operation>>a>>b;
	if (operation==1)	cout<<add(a,b);
	else if (operation==2)	cout<<diff(a,b);
	else if (operation==3)	cout<<prod(a,b);
	else if (operation==4)	cout<<div(a,b);
	return 0;
}

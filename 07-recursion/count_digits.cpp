#include <iostream>
using namespace std;

int countD(int num)
{
    if (num==0)
    {
        return 0;
    }
    num/=10;
    return 1+countD(num);
}

int main()
{
    int num;
    cin>>num;
    cout<<countD(num);
    return 0;
}

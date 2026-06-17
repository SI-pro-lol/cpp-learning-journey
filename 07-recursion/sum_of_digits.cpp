#include <iostream>
using namespace std;

int SoD(int num)
{
    int rem;
    if (num==0)
    {
        return 0;
    }
    rem=num%10;
    num=num/10;
    return rem+SoD(num);
}

int main()
{
    int num;
    cin>>num;
    cout<<SoD(num);
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no";
    cin>>n;
    bool flag=true;// true means prime

    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        flag =false;
        break;
    }
    if(flag==true)
    cout<<n<<"isprime";
    else
    cout<<"n"<<"is composite no";

    }



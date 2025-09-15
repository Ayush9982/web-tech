#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no";
    cin>>n;
    int d=0;
    int rev=0;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
   
    }
    cout<<rev;
}
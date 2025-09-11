#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no";
    cin>>n;
    //2 4 8 16 ....n terms
    int a=1;
    for(int i=0;i<=n;i++)
    {
        cout<<a<<endl;
        a=a*2;
    }
}
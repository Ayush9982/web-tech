#include<iostream>
using namespace std;
int main()
{
    int sp;
    cout<<"enter sp :";
    cin>>sp;
    int cp;
    cout<<"enter cp:";
    cin>>cp;
    if (sp>cp)
    {
        cout<<"profit";

    }
   if(cp>sp)
   {
    cout<<"loss";

   }
   if(cp==sp)
   {
    cout<<"no profit no loss";

   }
   
}







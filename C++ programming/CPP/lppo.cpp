#include<iostream>
using namespace std;
int main()
{
    int i,j,no;
    cout<<"enter the number"<<endl;
    cin>>no;
    for(i=0;i<=no;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<" "<<endl;
    }

}
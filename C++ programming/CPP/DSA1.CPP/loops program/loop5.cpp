#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int count=1;
    
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
            
        }
        cout<<" "<<endl;
    }
    return 0;
}